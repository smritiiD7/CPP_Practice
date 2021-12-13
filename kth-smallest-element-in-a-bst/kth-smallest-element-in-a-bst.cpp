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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        ksmall(root , arr );
            return arr[k-1];
    }
     void ksmall (TreeNode * root , vector<int>& v)
     {
         if(root!=NULL)
         {
             ksmall(root->left , v);
             v.push_back(root->val);
             ksmall(root->right , v);
         }
     }
};