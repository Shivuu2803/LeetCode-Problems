class Solution 
{
    public:

    double trimMean(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int totalElements = nums.size();
        double sum = 0;

        int startIndex = (totalElements * 0.05);
        
        for (int i = startIndex; i < totalElements - startIndex; ++i) 
        {
            sum += nums[i];
        }
        
        return sum / (totalElements * 0.9);
    }
};
