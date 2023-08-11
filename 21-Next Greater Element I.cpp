class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> key(findNums.size(), -1); 
        
        unordered_map<int, int> nextGreater; 
      
        for (int i = 0; i < nums.size(); i++) 
        {
            int num = nums[i];
            for (int j = i + 1; j < nums.size(); j++) 
            {
                if (nums[j] > num) 
                {
                    nextGreater[num] = nums[j];
                    break;
                }
            }
        }
        
        for (int i = 0; i < findNums.size(); i++) 
        {
            if (nextGreater.find(findNums[i]) != nextGreater.end())
            {
                key[i] = nextGreater[findNums[i]];
            }
        }
        
        return key;
    }
};
