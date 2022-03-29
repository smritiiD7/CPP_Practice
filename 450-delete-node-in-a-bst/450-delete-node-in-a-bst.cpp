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
    TreeNode* getSuccessor(TreeNode* curr)
    {
        curr = curr->right;
        while(curr!=NULL && curr->left!=NULL)
        {
            curr=curr->left;
        }
        return curr;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root ==NULL) return NULL;
        
        //searching for the key
        if(root->val>key)
            root->left = deleteNode(root->left,key);
        else if(root->val<key)
            root->right = deleteNode(root->right,key);
        
        //if found, let us see if it has one child or no children(leaf nodes)
        else
        {
          if(root->left ==NULL)
          {
              TreeNode *temp = root->right;
              delete root;
              return temp;
          }
            else if(root->right ==NULL)
            {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            else //when both the child are not null
            {
                TreeNode *succ = getSuccessor(root);
                root->val = succ->val;
                root->right = deleteNode(root->right,succ->val); //deleting the closest greater number
            }
                
        }
        return root;
        
        
    }
};