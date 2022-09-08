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
    int maxi=0;
    int diameterOfBinaryTree(TreeNode* root) {
     if(root == NULL) return 0;
     int diameter=0;
     height(root, diameter);
        return diameter;
    }
    
    int height(TreeNode* root, int &diameter)
    {
         if(root ==NULL)   return 0;
        int lh=0,rh=0;
     lh = height(root->left,diameter);
     rh = height(root->right,diameter);
    diameter = max(lh+rh,diameter);
    return 1+ max(lh,rh);
    }
};