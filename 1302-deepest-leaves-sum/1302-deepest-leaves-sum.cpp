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
        if(root == NULL)
            return 0;
        q.push(root);
        int sum=0;
        while(!q.empty())
        {
            int n = q.size();
             sum = 0;
            while(n--)
            {
                TreeNode *temp = q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                if(temp->left==NULL && temp->right==NULL)
                    sum+=temp->val;
            
                
            }
        }
        return sum;
    }
};