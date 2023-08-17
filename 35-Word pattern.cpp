class Solution 
{
public:
    bool wordPattern(string pattern, string str) 
    {
        vector<string> s;
        string st= "";

        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
            {
              s.push_back(st);
              st="";
                
            }
            else
            {
              st+=str[i];
            }
        }

        if(st!="")
        {
          s.push_back(st);
        }
        if(pattern.size()!=s.size())
        {
          return false;
        }

        map<string,vector<int> > m1;
        map<char,vector<int> > m2;

        for(int i=0;i<s.size();i++)
        {
            m1[s[i]].push_back(i);
            m2[pattern[i]].push_back(i);
            
        }
        for(int i=0;i<s.size();i++)
        {
            if(m1[s[i]]!=m2[pattern[i]])return false;
        }
        return true;
    }
};
