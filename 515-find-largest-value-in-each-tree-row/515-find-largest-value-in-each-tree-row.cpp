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
    vector<int> largestValues(TreeNode* root) {
      vector<int> ans;
        if(root==NULL) return ans;
      queue<TreeNode*> pq;
      pq.push(root);
        
      while(pq.size()>0)
      {
          int maxi=INT_MIN;
          int n = pq.size();
          
          for(int i=0;i<n;i++)
          {
             TreeNode *curr =pq.front();
             pq.pop();
              if(curr->val>maxi)
              {
                  maxi=curr->val;
              }
              if(curr->left){ pq.push(curr->left);}
              if(curr->right){pq.push(curr->right);}  
          }
          ans.push_back(maxi);
      }
        return ans;
        
    }
};