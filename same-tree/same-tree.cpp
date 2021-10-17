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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> sp;
        stack<TreeNode*> sq;
        if(p)
        sp.push(p);
        if(q)
        sq.push(q);
        while(sp.empty()==false && sq.empty()==false)
        {
            TreeNode* currp = sp.top();
            TreeNode* currq = sq.top();
            sp.pop();
            sq.pop();
            if(currp->val != currq->val)return false;
            if(currp->left) sp.push(currp->left);
            if(currq->left) sq.push(currq->left);
            if(sp.size()!=sq.size()) return false;
            if(currp->right) sp.push(currp->right);
            if(currq->right) sq.push(currq->right);
            if(sp.size()!=sq.size()) return false;
        }
        return sp.size()==sq.size();
    }
};