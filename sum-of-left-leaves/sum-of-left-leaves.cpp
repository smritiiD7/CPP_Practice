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
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> leaf;
        int top= root->val;
        if(root==NULL)
            return 0;
       int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false)
        {
                TreeNode* curr =q.front();
                q.pop();
                if(curr->left!=NULL){
                    if(curr->left->left==NULL && curr->left->right==NULL)
                        sum+=curr->left->val;
                    q.push(curr->left);
                }
                  
                if(curr->right!=NULL)
                   q.push(curr->right);
            }
        //int sum = accumulate(leaf.begin(),leaf.end(),0)-top;
        return sum;
    }
};