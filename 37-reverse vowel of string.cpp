class Solution {
public:
    string reverseVowels(string s) 
    {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) 
        {
            while (l < r && !isVowel(s[l]))
            {
                ++l;
            }
            while (l < r && !isVowel(s[r])) 
            {
                --r;
            }
            swap(s[l++], s[r--]);
        }

        return s;
    }

    public: 

    bool isVowel(char c)
        {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        }
};
