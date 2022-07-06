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
    unordered_map<int,int> mp;
public:
    TreeNode* builtBst(vector<int> &inorder, vector<int> &preorder, int left, int right, int &index)
    {
        if(left>right) return NULL;
        
        TreeNode* root = new TreeNode(preorder[index++]);
        int i= mp[root->val];
        root->left = builtBst(inorder,preorder,left,i-1,index);
        root->right = builtBst(inorder,preorder,i+1,right,index);
        
        return root;
    }
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      vector<int> inorder(preorder.begin(),preorder.end());
        int index=0;
      sort(inorder.begin(),inorder.end());
       for(int i=0; i<inorder.size();i++)
       {
           mp[inorder[i]]=i;
       }
        
      int n = preorder.size();
      return builtBst(inorder,preorder,0, n-1, index);
    }
};