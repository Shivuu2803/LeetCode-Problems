class Solution 
{
public:
	int calPoints(vector<string>& ops) 
    {
    
	stack<int> st;

    for(string &x : ops)  
    {
        
		if(x == "+")
        {
            int a = st.top();
            st.pop();
			int b = st.top();
            int add = a + b;
			st.push(a);
			st.push(add);
            
        }
		
        else if(x == "D")
        {
            int a = st.top();
            st.push(2*a);
        }
        else if(x == "C")
        {
            st.pop();
        }
        else
        {
            st.push(stoi(x));
        }
        
    }

        int ans = 0;
    
        while(!st.empty())
        {
        ans+=st.top();
        st.pop();
        }
        return ans;
    }
};
