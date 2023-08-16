class Solution 
{
public:
    string convertToTitle(int columnNumber) 
    {
        string ans;
        
        while(columnNumber > 0)
        {
            // Subtract 1 before converting to character to map 1 to 'A'
            char currentChar = 'A' + (columnNumber - 1) % 26;
            ans.insert(ans.begin(), currentChar);
            columnNumber = (columnNumber - 1) / 26;
        }
        
        return ans;   
    }
};
