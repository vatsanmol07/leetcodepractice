class Solution {
public:
    TreeNode* prev = nullptr;
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;

    void inorder(TreeNode* root) {
        if (root == nullptr)
            return;

        inorder(root->left);

        if (prev != nullptr && prev->val > root->val) {
            if (first == nullptr)
                first = prev;
            second = root;
        }

        prev = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);

        if (first != nullptr && second != nullptr)
            swap(first->val, second->val);
    }
};