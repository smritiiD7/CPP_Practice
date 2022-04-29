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
     
    int findMax(int start, int end, vector<int>& nums)
    {
        int index=start;
        for(int i=start;i<=end;i++)
        {
            if(nums[i]>nums[index])
            {

                index=i;
            }
        }
        return index;
    }
    
    
    TreeNode* buildTree(int start,int end, vector<int>& nums)
    {
        if(start>end) return NULL;
        //if(start==end) return new TreeNode(nums[start]);
        int index=findMax(start,end,nums);
        TreeNode *node = new TreeNode(nums[index]);
        node->left=buildTree(start,index-1,nums);
        node->right=buildTree(index+1,end,nums);
        return node;
    }
   
    
    
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
      
        int n = nums.size();
        return buildTree(0,n-1,nums);
        
    }
};