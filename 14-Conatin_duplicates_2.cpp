class Solution 
{
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) 
  {
    unordered_set<int> myset;

    for (int i = 0; i < nums.size(); ++i) {
      if (!myset.insert(nums[i]).second)
        return true;
      if (i >= k)
        myset.erase(nums[i - k]);
    }

    return false;
  }
};
