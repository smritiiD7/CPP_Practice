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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        int sum=0;
        q.push(root);
        
        while(q.empty()==false)
        {
            int n = q.size();
            sum=0;
            for(int i=0;i<n;i++){
                TreeNode * curr = q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
                if(curr->left==NULL && curr->right==NULL)
                    sum+=curr->val;                
            }
        }
        return sum;
    }
};