/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode *parent; // Add a parent pointer
 *     TreeNode() : val(0), left(nullptr), right(nullptr), parent(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr), parent(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right), parent(nullptr) {}
 * };
 */
class Solution 
{
public:
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> vec;
        TreeNode* curr = root;
        
        while (curr) 
        {
            if (!curr->right) 
            {
                vec.push_back(curr->val);
                curr = curr->left;
            } 
            else 
            {
                TreeNode* succ = curr->right;
                while (succ->left && succ->left != curr) 
                {
                    succ = succ->left;
                }
                
                if (!succ->left) 
                {
                    vec.push_back(curr->val);
                    succ->left = curr;
                    curr = curr->right;
                } 
                else 
                {
                    succ->left = nullptr;
                    curr = curr->left;
                }
            }
        }
        reverse(vec.begin(), vec.end());
        
        return vec;
    }
};
