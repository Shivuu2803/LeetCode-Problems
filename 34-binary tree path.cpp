class Solution 
{
public:
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        string path = "";
        vector<string> paths;
        dfs(root, path, paths);
        return paths;
    }

    void dfs(TreeNode* root, string path, vector<string>& paths)
    {
        if (!root)
        {
           return;
        }
        else
        {
            if (path == "")
            {
                path += to_string(root->val);
            }
            else
            {
                path = path + "->" + to_string(root->val);    
            }
            if (!root->right && !root->left)
            {
                paths.push_back(path);
            }
            dfs(root->left, path, paths);
            dfs(root->right, path, paths);
        }
    }
};
