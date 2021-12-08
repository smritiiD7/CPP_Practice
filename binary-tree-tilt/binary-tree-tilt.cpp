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
    int postorder(TreeNode * root, int  &res)
    {
        if(root == NULL)
            return 0;
        int left = postorder(root->left, res);
        int right = postorder(root->right, res);
        res+=abs(left-right);
        return left+right+root->val;
    }
    int findTilt(TreeNode* root) {
        int res = 0;
         postorder(root, res);
        return res;
    }
};