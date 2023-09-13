class Solution 
{
public:
    int minOperations(vector<string>& logs) 
    {
        int ans = 0;

        for (string& x : logs) 
        {
           if (x == "./")
           {
               continue;
           }
           if (x == "../")
           {
               ans = max(0, ans - 1);
           }
           else
           {
               ++ans;
           }
        }

        return ans;
    }
};
