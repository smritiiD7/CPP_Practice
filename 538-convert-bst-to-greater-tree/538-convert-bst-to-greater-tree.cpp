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
    int curr_sum=0;
    void FindSum(TreeNode *root)
    {
         if(root==NULL)return;
        
        //inverse inorder
        FindSum(root->right);
        root->val+=curr_sum;
        curr_sum=root->val;
        if(root->left)
            FindSum(root->left);
        
    }
    TreeNode* convertBST(TreeNode* root) {
     
        
       FindSum(root);
        return root;
    }
};