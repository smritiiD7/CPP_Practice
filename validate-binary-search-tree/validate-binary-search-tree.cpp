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
     vector<int> a;
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
           // if(root == NULL) return true;
            isValidBST(root->left);
            a.push_back(root->val);
            isValidBST(root->right);
        for(int i=1;i<a.size();i++)
        {
           if(a[i-1]>=a[i])
               return false;
        }
        return true;
    }
};