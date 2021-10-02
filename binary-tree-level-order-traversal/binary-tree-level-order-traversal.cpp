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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> v;
        if(root==NULL) return v;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> extra;
            for(int i=0;i<size;i++)
            {
                TreeNode* first =q.front();
                q.pop();
                if(first->left != NULL) q.push(first->left);
                if(first->right != NULL) q.push(first->right);
                extra.push_back(first->val);
            }
            v.push_back(extra);
        }
        return v;
    }
};