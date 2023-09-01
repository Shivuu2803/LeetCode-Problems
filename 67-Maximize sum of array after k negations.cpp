class Solution 
{
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());

        int sum = 0;
        int negativeCount = 0; 
        bool hasZero = false;  

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0) 
            {
                hasZero = true; 
            }
            if (nums[i] < 0 && k > 0) 
            {
              nums[i] = -nums[i];
              k--;
            }
            sum += nums[i]; 
        }

       if (hasZero || k == 0 || k % 2 == 0) 
       {
          return sum; 
       } 
       else 
       {
          int minElement = *min_element(nums.begin(), nums.end());
          return sum - 2 * minElement;
       }
    }
};
