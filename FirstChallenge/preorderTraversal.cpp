class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> stack;
        
        if (root) stack.push(root);
        
        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();
            result.push_back(node->val);
            
            if (node->right) stack.push(node->right);
            if (node->left) stack.push(node->left);
        }
        
        return result;
    }
};
