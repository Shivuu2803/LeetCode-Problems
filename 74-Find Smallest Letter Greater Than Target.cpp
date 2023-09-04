class Solution 
{
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int s = 0;
        int e = letters.size();

        while (s < e) 
        {
            int m = (s + e) / 2;
            if (letters[m] > target)
            {
                e = m;
            }
            else
            {
                s = m + 1;
            }
        }
        
        return letters[s % letters.size()];
    }
};
