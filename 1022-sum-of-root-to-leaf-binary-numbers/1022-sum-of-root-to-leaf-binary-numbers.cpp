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
    int ans=0;
public:
    void dfs(TreeNode* root,int mul)
    {
        mul=mul*2+root->val;
        if(root->left==NULL && root->right==NULL){
         ans+=mul;
        return;}
        if(root->left!=NULL)dfs(root->left,mul);
        if(root->right!=NULL)dfs(root->right,mul);
    }
    int sumRootToLeaf(TreeNode* root) {
        int mul=0;
        dfs(root,mul);
        return ans;
    }
};