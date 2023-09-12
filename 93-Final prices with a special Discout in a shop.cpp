class Solution 
{
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        int n = prices.size();
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++)
        {
            int j;
            for(j = i+1; j < n; j++)
            {
                if(prices[j] <= prices[i])
                {
                    break;
                }
            }
            if(j < n && prices[j] <= prices[i])
            {
                prices[i] -= prices[j];
            }
        }
        
        return prices;
    }
    
};
