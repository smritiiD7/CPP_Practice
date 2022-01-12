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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *curr(root),*prev(root);
        TreeNode *temp = new TreeNode( val );
        if(root == NULL) return temp;
        while(curr)
        {
            if(curr->val > val)
            {
                prev = curr;
                curr=curr->left;
            }
            else if(curr->val <val)
            {
                prev = curr;
                curr=curr->right;
            }
        }
        if(prev->val > val)
        {
            prev->left = temp;
        }
        else
            prev->right = temp;
        return root;
    }
};