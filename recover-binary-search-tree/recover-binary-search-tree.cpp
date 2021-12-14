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
    int i=0;
    void recoverTree(TreeNode* root) {
     sol1(root);
        sort(v.begin(),v.end());
       sol2(root);
    }
    void sol1(TreeNode* n){
        if(!n)return;
        sol1(n->left);
        v.push_back(n->val);
        sol1(n->right);
    }
     void sol2(TreeNode* n){
         if(!n) return;
         sol2(n->left);
         n->val=v[i++];
         sol2(n->right);
     }
};