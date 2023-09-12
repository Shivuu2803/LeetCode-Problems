class Solution 
{
public:
    string removeOuterParentheses(string s) 
    {
        string st;
        int count = 0;

        for (char c : s) 
        {
            if (c == '(' && count++ > 0)
            {
                 st+= c;
            }

            if (c == ')' && count-- > 1)
            {
                st+= c;
            }
        }

        return st;

    }
};
