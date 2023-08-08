class Solution 
{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_set<int> set;

        for (int i = 0; i < nums.size(); ++i) 
        {
           if (!set.insert(nums[i]).second)
           {
              return true;
           }
           if (i >= k)
           {
              set.erase(nums[i - k]);
           }
    }
      return false;
    }
};
