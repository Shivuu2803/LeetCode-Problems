class Solution 
{
public:
    int romanToInt(string s) 
    {
        int n = s.size();
        unordered_map<char, int> romanToValue = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        for(int i = 0; i < n; i++) 
        {
            if(i < n - 1 && romanToValue[s[i]] < romanToValue[s[i + 1]])
            {
                sum -= romanToValue[s[i]];
            }
            else 
            {
                sum += romanToValue[s[i]];
            }
        }
        
        return sum;
    }
};
