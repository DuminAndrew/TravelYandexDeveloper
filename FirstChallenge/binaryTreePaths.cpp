class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if (root) {
            findPaths(root, "", paths);
        }
        return paths;
    }

private:
    void findPaths(TreeNode* node, string path, vector<string>& paths) {
        path += to_string(node->val);
        if (!node->left && !node->right) {
            paths.push_back(path);
        } else {
            path += "->";
            if (node->left) {
                findPaths(node->left, path, paths);
            }
            if (node->right) {
                findPaths(node->right, path, paths);
            }
        }
    }
};
