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
    vector<int> findMode(TreeNode* root) {
       //hare krishna...
        int maxi=INT_MIN;
        vector<int> ans;
        unordered_map<int,int> mp;
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty()==false)
        {
            int n = q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode * curr = q.front();
                q.pop();
                mp[curr->val]++;
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);  
            }
        }
        for(auto i : mp)
        {
           if(i.second>maxi)
           {
               maxi=i.second;
              // ans=i.first;
              // ans.push_back(i.first);
           }
        }
        
        for(auto i : mp)
        {
            if(i.second==maxi)
            {
                ans.push_back(i.first); 
            }
        }
        return ans;
    }
};