class Solution
{
public:
    int maxDepth(string s) 
    {
         int ans=0,x=0;

        for(int i=0;i<s.length();i++)
        {
           if(s[i]=='(')
           {
               x++;
           }
           else if(s[i]==')')
           {
               x--;
           }
           
           ans = ans > x ? ans : x;
        }
        return ans;
    }
};
