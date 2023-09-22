class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int s = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int e = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();

        if (s == e) 
        {
            return {-1, -1};
        }
        return 
        {s, e - 1};
    }
};
