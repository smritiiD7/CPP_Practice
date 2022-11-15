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
      queue<TreeNode*> q;
      if(root == NULL) return 0;
      q.push(root);
      int cnt=0;
      while(q.empty()==false)
      {
          int n = q.size();
          cnt+=n;
          for(int i=0;i<n;i++)
          {
              TreeNode* curr = q.front();
              q.pop();
              if(curr->left) q.push(curr->left);
              if(curr->right) q.push(curr->right);
          }
      }
        return cnt;
    }
};