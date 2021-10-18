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
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,int> mp;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()==false)
        {
               TreeNode * curr =q.front();
            q.pop();
            if(curr->left!=NULL && curr->right!=NULL)
            {
                if(curr->left->val==x && curr->right->val == y || curr->left->val==y && curr->right->val == x)
                    return false;
            }
            
            if(curr->left)
            {
                q.push(curr->left);
                mp[curr->left->val]=mp[curr->val]+1;
            }
            
            if(curr->right)
            {
                q.push(curr->right);
                mp[curr->right->val]=mp[curr->val]+1;
            }
        }
        return mp[x]==mp[y];
    }
};