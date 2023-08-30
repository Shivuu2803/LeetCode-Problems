class Solution 
{
    public:

    int heightChecker(vector<int>& heights) 
    {
        vector<int> vec = heights;
        sort(vec.begin(), vec.end());
        
        int ind = 0;
        int n = heights.size();
        for (int i = 0; i < n; ++i) 
        {
            if (vec[i] != heights[i]) 
            {
                ++ind;
            }
        }
        return ind;
    }
};
