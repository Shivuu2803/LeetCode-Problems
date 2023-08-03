//1st approach is bruteforce

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0; i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return{i,j};
                }
            }
        }

        return{};
    }
};

//2nd approach is using map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> map;

        for (int i = 0; i < nums.size(); i++) 
        {
            int complement = target - nums[i];
            auto it = map.find(complement);
            if (it != map.end()) {
                return {it->second, i};
            }
            map[nums[i]] = i;
        }

        return {}; 
    }
};
