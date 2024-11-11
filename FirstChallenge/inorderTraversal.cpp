class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> stack;
        TreeNode* current = root;

        while (current != nullptr || !stack.empty()) {
            while (current != nullptr) {
                stack.push(current);
                current = current->left; // Переходим к левому поддереву
            }
            current = stack.top(); // Получаем узел из стека
            stack.pop();
            result.push_back(current->val); // Добавляем значение узла
            current = current->right; // Переходим к правому поддереву
        }

        return result;
    }
};
