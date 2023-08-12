class Solution 
{
public:
    vector<string> findWords(vector<string>& words) 
    {
        unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};  
        unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};  
        unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};   

        vector<unordered_set<char>> rows {row1, row2, row3};
        vector<string> vec;

        for(string& st : words)
        {
            int row = -1;
            for(int i=0; i<3; i++)
            {
                if(rows[i].count(tolower(st[0])) > 0) 
                {
                    row = i;
                    break; 
                }
            }
            
            if (row == -1) continue;        
            
            bool valid = true;
            for(int j=1, sz=st.size(); j<sz; j++)
            {
                if(rows[row].count(tolower(st[j])) == 0)
                {
                    valid = false;
                    break;
                }
            }
            
            if (valid) vec.push_back(st);
        }

        return vec;
    }
};
