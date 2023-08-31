class Solution 
{
    public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
       vector<int> vec(arr);
       unordered_map<int, int> rank;

       sort(vec.begin(), vec.end());

        for (const int a : vec)
        {
           if (!rank.count(a))
           {
               rank[a] = rank.size() + 1;
           }
        }

        for (int& a : arr)
        {
            a = rank[a];

        }
    return arr;
  }
};
