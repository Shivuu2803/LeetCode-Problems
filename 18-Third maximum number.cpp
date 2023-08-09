class Solution 
{
public:
    int thirdMax(vector<int>& nums) 
    {
        long max1 = LONG_MIN;  // 1st maximum
        long max2 = LONG_MIN;  // 2nd maximum
        long max3 = LONG_MIN;  // 3rd maximum

    for (const int x : nums)
      if (x > max1) 
      {
        max3 = max2;
        max2 = max1;
        max1 = x;
      } else if (max1 > x && x > max2) 
      {
        max3 = max2;
        max2 = x;
      } else if (max2 > x && x > max3) 
      {
        max3 = x;
      }

    return max3 == LONG_MIN ? max1 : max3;
    }
};
