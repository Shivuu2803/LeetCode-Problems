class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        if (nums1.size() > nums2.size()) 
        {
            return intersect(nums2, nums1);
        }

        vector<int> ans;
        unordered_map<int, int> count;

        for (const int x : nums1) 
        {
            ++count[x];
        }

        for (const int y : nums2) 
        {
            if (const auto it = count.find(y); it != count.cend() && it->second-- > 0) 
            {
                ans.push_back(y);
            }
        }

        return ans;
    }
};
