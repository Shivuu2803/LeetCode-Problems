class Solution 

{
public:
    TreeNode* sortedArrayToBSTUtil(vector<int>& nums, int start, int end)
    {
        if(start > end)
        {
            return NULL;
        }

        int mid = (start + end)/2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = sortedArrayToBSTUtil(nums, start, mid - 1);
        root->right = sortedArrayToBSTUtil(nums, mid + 1, end);

        return root;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        if(nums.size() == 0)
        {
            return NULL;
        }

        return sortedArrayToBSTUtil(nums, 0, nums.size() - 1);
    }
};
