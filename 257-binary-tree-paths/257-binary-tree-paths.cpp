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
      void rootToLeaf(TreeNode* root , vector<string> &ans,string ch){
        if(!root->left && !root->right)
        {
            ans.push_back(ch);
            return;
          
        }
        
        if(root->left) rootToLeaf(root->left,ans, ch+ "->"+ to_string(root->left->val));
        if(root->right) rootToLeaf(root->right,ans,ch + "->"+ to_string(root->right->val));
     
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root) return ans;
     
        rootToLeaf(root,ans,to_string(root->val));
        return ans;
    }
};