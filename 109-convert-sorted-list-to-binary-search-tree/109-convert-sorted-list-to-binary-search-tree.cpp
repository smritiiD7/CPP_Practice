/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
     TreeNode* helper(vector<int> &nums,int low,int high)
     {
         while(low<=high){
         int mid = low+(high-low)/2;
         TreeNode *root = new TreeNode(nums[mid]);
         root->left = helper(nums,low,mid-1);
         root->right = helper(nums,mid+1,high);
         return root;
         }
         return NULL;
     }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
      vector<int> v;
         ListNode* curr(head);
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        int n = v.size();
        TreeNode * ans =helper(v,0,n-1); 
        return ans;
        
    }
};