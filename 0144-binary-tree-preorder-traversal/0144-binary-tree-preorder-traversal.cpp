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
    void preOrder(TreeNode*root,vector<int>&ans){
        
    if(root==NULL)
    return;
    //node
    ans.push_back(root->val);
    //left
    preOrder(root->left,ans);
    //right
    preOrder(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
         /*stack<TreeNode*>s;
        s.push(root);
        vector<int>ans;
        if (root == nullptr) return ans;
        while(!s.empty()){
            TreeNode* temp=s.top();
            s.pop();
            ans.push_back(temp->val);
            if(temp->right)
            s.push(temp->right);
            if(temp->left)
            s.push(temp->left);
        }
        return ans;*/
        vector<int>ans;
        preOrder(root,ans);
        return ans;
    }
};