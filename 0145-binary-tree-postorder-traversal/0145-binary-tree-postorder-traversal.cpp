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
     void postorder(TreeNode* root,vector<int>&mayarathi){
        if(root==NULL)
        return;
         //left
    postorder(root->left,mayarathi);
    //right
    postorder(root->right,mayarathi);
    //node
    mayarathi.push_back(root->val);
     }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>mayarathi;
      postorder(root,mayarathi);
      return mayarathi;
    }
};