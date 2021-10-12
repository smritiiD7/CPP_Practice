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
    int countNodes(TreeNode* root) {
      if(root==NULL)
          return 0;
        queue<TreeNode*> q;
        int cnt=0,ans=0;
        q.push(root);
        while(q.empty()==false){
        cnt=q.size();
        ans+=cnt;
        for(int i=0;i<cnt;i++)
        {
            TreeNode *curr =q.front();
            q.pop();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        }
        return ans;
    }
};