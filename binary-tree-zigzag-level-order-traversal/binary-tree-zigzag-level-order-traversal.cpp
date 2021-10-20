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
      
       vector<vector<int>> ans;
        if(root==NULL)
            return {};
        queue<TreeNode*> q;
        stack<int> s;
        bool reverse=false;
        q.push(root);
        while(q.empty()==false)
        {
            vector<int> p;
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode* curr =q.front();
                q.pop();
                if(reverse==true)
                {
                    s.push(curr->val);
                }
                else p.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
          
            if(reverse==true){
                while(s.empty()==false){
                    p.push_back(s.top());
                    s.pop();
                }
            }
            reverse=!reverse;
              ans.push_back(p);
        }
        
        return ans;
        
    }
};