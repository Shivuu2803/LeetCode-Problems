class Solution 
{
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int x = grid.size();
        int y = grid[0].size();

        int i = x - 1;
        int j = 0;
        int ans = 0;

        while (i >= 0 && j < y) 
        {
           if (grid[i][j] < 0) 
           {
               ans += y - j;
               --i;
           } 
           else 
           {
               ++j;
           }
        }

        return ans;
    }
    
};
