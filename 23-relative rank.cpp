class Solution 
{
public:
    vector<string> findRelativeRanks(vector<int>& nums) 
    {
        const int n = nums.size();
        vector<string> ans(n);

        priority_queue<pair<int, int>> pq; // Max heap of pairs (num,index)

        for (int i = 0; i < n; ++i) 
        {
            pq.push({nums[i], i});
        }

        for (int i = 0; i < n; ++i) 
        {
            int index = pq.top().second;
            pq.pop();

            if (i == 0)
            {
                ans[index] = "Gold Medal";
            }
            else if (i == 1)
            {
                ans[index] = "Silver Medal";
            }
            else if (i == 2)
            {
                ans[index] = "Bronze Medal";
            }
            else
            {
                ans[index] = to_string(i + 1);
            }
        }

        return ans;
    }
};
