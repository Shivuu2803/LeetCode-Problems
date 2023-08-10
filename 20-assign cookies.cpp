class Solution 
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int childrenCount = g.size(), cookiesCount = s.size();
        int cookie = 0, answer = 0;
       
        for(int i=0; i < childrenCount && cookie < cookiesCount;)
        {
        if(s[cookie] >= g[i])
        {
            i++;
            answer++;
        }
        cookie++;
    }
    return answer;
    }
};
