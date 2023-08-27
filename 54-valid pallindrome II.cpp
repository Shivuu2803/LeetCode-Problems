class Solution 
{
public:
    bool isPalindromeRange(string s, int start, int end)
    {
        while(start < end)
        {
            if(s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) 
    {
        for(int i = 0; i < s.size()/2; i++)
        {
            int j = s.size()-1-i;
            if(s[i] != s[j])
            {
                return isPalindromeRange(s, i+1, j) || 
                isPalindromeRange(s, i, j-1);
            }
        }
        return true;
    }
};
