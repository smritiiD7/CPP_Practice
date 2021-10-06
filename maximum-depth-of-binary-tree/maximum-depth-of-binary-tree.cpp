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
    int maxDepth(TreeNode* root) {
     
        if(root==NULL)
            return 0;
         int cnt=0,n;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            ++cnt;
            for(int i=0,n=q.size();i<n;++i)
            {
                TreeNode*first=q.front();
                q.pop();
                if(first->left!=NULL)
                    q.push(first->left);
                if(first->right!=NULL)
                    q.push(first->right);
            }
        }
        return cnt;
    }
};