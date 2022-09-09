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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      bool reversed = false; //left to right
      vector<vector<int>> ans;
       queue<TreeNode*> q;
       if(root == NULL) return {};
       q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                temp.push_back(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
             if(reversed == true)
                {
                   reverse(temp.begin(),temp.end());
                } 
            reversed=!reversed;
            ans.push_back(temp);
        }
        return ans;
    }
};