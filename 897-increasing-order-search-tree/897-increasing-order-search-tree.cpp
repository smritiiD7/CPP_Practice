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
     vector<int> v;
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL) return NULL;
       
        increasingBST(root->left);
        v.push_back(root->val);
        increasingBST(root->right);
        
        TreeNode  * root1 = new TreeNode(v[0]);
        TreeNode *res(root1);
        for(int i=1;i<v.size();i++){
            root1->right=new TreeNode(v[i]);
            root1=root1->right;
        }
        return res;
    }
};