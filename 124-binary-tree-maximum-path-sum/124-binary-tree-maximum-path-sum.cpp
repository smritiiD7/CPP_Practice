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
    int maxPathSum(TreeNode* root) {
       // if(root->left == NULL and root->right == NULL) return root->val;
        int maxiPath=INT_MIN;
       height(root, maxiPath);
        return maxiPath;
    }
      int height(TreeNode* root, int &maxiPath)
    {
        if(root==NULL) return 0;
       // int leftSum=0,rightSum=0;
      int leftSum = max(0,height(root->left,maxiPath));
       int rightSum= max(0,height(root->right,maxiPath));
        
        maxiPath = max(maxiPath, root->val+leftSum+rightSum);
        return max(leftSum, rightSum) + root->val;
    }
};