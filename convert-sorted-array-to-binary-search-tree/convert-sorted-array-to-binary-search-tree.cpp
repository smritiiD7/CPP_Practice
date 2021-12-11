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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
         return helper(nums, 0,n-1);
     
    }
    
    TreeNode* helper(vector<int> &num, int low,int high){
      
        while(low<=high){
              int mid = low+(high-low)/2;
              TreeNode * root = new TreeNode(num[mid]);
             root->left = helper(num,low,mid-1);
            root->right = helper(num,mid+1,high);
            return root;
        }
        return NULL;
    }
};