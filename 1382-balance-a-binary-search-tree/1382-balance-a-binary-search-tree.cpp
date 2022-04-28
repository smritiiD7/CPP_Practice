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
    vector<TreeNode*> v;
    TreeNode* builtNewTree(int start,int end)
    {
        if(start>end) return NULL;
        int mid = (end+start)/2;
        TreeNode* root = v[mid];
        root->left=builtNewTree(start,mid-1);
        root->right=builtNewTree(mid+1,end);
            return root;
    }
    void inorder(TreeNode *root)
    {
        if(root == NULL)
            return;
        inorder(root->left);
        v.push_back(root);
        inorder(root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        root= builtNewTree(0,v.size()-1);
        return root;
    }
};