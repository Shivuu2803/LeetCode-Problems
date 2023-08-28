class Solution 
{
public:
    vector<int> findErrorNums(vector<int>& A) 
    {
        vector<int> v(2);
        int n = A.size();
        
        sort(A.begin(), A.end());
        
        int duplicate = -1;
        int missing = 1;
        
        for (int i = 1; i < n; i++) 
        {
            if (A[i] == A[i - 1]) 
            {
                duplicate = A[i];
            }
            else if (A[i] > A[i - 1] + 1) 
            {
                missing = A[i - 1] + 1;
            }
        }
        
        if (A[n - 1] != n) 
        {
            missing = n;
        }
        
        v[0] = duplicate;
        v[1] = missing;
        
        return v;
    }
};
