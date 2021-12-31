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
     private:
    int diff =0;
public:
    int maxAncestorDiff(TreeNode* root,int mini= INT_MAX, int maxi = INT_MIN) {
       if(nullptr == root) return 0;
        maxi = max(maxi,root->val);
        mini = min(mini,root->val);
        diff = max(diff,abs(maxi-mini));
        maxAncestorDiff(root->left,mini,maxi);
        maxAncestorDiff(root->right,mini,maxi);
        return diff;
      
    }
};