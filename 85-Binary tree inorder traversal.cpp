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
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> vec;
        TreeNode* curr = root;
        
        while (curr) 
        {
            if (!curr->left) 
            {
                vec.push_back(curr->val);
                curr = curr->right;
            } 
            else
            {
                TreeNode* pred = curr->left;
                while (pred->right && pred->right != curr) 
                {
                    pred = pred->right;
                }
                
                if (!pred->right) 
                {
                    pred->right = curr;
                    curr = curr->left;
                } 
                else 
                {
                    pred->right = nullptr;
                    vec.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
        
        return vec;
    }
};
