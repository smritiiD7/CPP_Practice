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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0;
        int sum =0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty() ==false)
        {
            TreeNode* curr = q.front();
            q.pop();
            if(curr->val >= low && curr->val <= high)
            {
              sum+=curr->val;
            }
            if(curr->left !=NULL)
                q.push(curr->left);
            if(curr->right !=NULL)
                q.push(curr->right);
        }
        return sum;
    }
};