class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size() == 0)
        {
            return "";
        }
        for(int i = 0; i < strs[0].size(); i++)  //i is char index
        {
            for(int j = 1; j < strs.size(); j++)  //j is string index
            {
                if(i >= strs[j].size() || strs[0][i] != strs[j][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};
