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
    set<int> s;
    vector<int> v;
    
    
    void inorder(TreeNode*  root)
    {
      if(root==NULL)
           return;
        inorder(root->left);
        if(s.find(root->val)==s.end())
            v.push_back(root->val);
        s.insert(root->val);
        inorder(root->right);  
  
    }
    
    
    
    int findSecondMinimumValue(TreeNode* root) {
        
        inorder(root);
        sort(v.begin(),v.end());
        if(v.size()<2) return -1;
        return v[1];
        
    }
};