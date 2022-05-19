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
    int currentSum=0;
    
    
     void findSum(TreeNode *&root)
    {
        if(root ==NULL) return;
        
         //inverse inorder traversal kr rhi hu vrom
         findSum(root->right);
         root->val+=currentSum;
         currentSum = root->val;
         if(root->left)
         {
             findSum(root->left);
         }
    }
    
    
    
    
    
    TreeNode* bstToGst(TreeNode* root) {
       findSum(root);
        return root;
        
        
    }
};