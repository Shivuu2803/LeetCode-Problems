class Solution 
{
   public:

   int findLHS(vector<int>& nums) 
   {
      int ans = 0;
      unordered_map<int, int> myMap;

      for (const int x : nums)
      {
         ++myMap[x];
      }

      for (auto& [x, freq] : myMap)
      {
        if (auto it =  myMap.find(x + 1); it !=  myMap.end())
        {
            ans = max(ans, freq + it->second);
        }
      }

    return ans;
   }
};
