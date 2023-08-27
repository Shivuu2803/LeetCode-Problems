class Solution 
{
public:
    int countBinarySubstrings(string s) 
    {
        int totalSubstrings = 0;
        int previousCount = 0;
        int currentCount = 1;

        for (int i = 0; i + 1 < s.length(); ++i)
        {
            if (s[i] == s[i + 1])
                ++currentCount;
            else 
            {
                totalSubstrings += min(previousCount, currentCount);
                previousCount = currentCount;
                currentCount = 1;
            }
        }

        return totalSubstrings + min(previousCount, currentCount);
    }
};
