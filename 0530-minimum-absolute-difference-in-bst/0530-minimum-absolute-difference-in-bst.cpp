/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void inorder(TreeNode* root, vector<int>& vats) {
        if (root == NULL)
            return;

        inorder(root->left, vats);
        vats.push_back(root->val);
        inorder(root->right, vats);
    }
    int getMinimumDifference(TreeNode* root) {
        if (root == NULL)
        return NULL;
       vector<int>vats;
         inorder(root, vats);
          int ans = INT_MAX;

        for (int i = 1; i < vats.size(); i++) {
            ans = min(ans, vats[i] - vats[i - 1]);
        }

        return ans;
       
    }
};