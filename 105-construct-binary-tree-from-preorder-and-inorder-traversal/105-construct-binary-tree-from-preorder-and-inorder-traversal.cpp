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
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int left,int right, int &index)
    {
        if(left>right) return NULL;
        
        TreeNode* root = new TreeNode(preorder[index++]);
        int i = mp[root->val];
       root->left= helper(preorder,inorder,left,i-1,index);
       root->right= helper(preorder,inorder,i+1,right,index);
        
        return root;
        
    }
    
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int ind=0;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        int n = preorder.size();
        return helper(preorder,inorder,0,n-1,ind);
    }
};