class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        unordered_set<int> myset;

    for (const auto &i : nums) 
    {
        myset.insert(i);
    }

    int N = nums.size();
    vector<int> result;
    for (int i = 1; i <= N; i++)   
    {
       if (myset.find(i) == myset.end()) 
       {
          result.emplace_back(i);
       }
    }

    return result;

    }
};
