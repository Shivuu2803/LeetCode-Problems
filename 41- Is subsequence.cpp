class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        if(s.empty())
        {
            return true;
        }   

        int i=0;
        for(char ch:t)
        {
            if(s[i]== ch && ++i == s.length())
            {
                return true;
            }
        }
        return false;
    }
};
