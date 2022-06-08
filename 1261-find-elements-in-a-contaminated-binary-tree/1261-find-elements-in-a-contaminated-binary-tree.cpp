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
class FindElements {
public:
    bool ans;
    int targetGlobal;
    TreeNode* rootGlobal;
    set<int> set1;
    
    void inorderDetox(TreeNode* &root,int x)
    {
      if(root==NULL) return;
      set1.insert(x);
      inorderDetox(root->left, 2*(x)+1);
      inorderDetox(root->right, 2*(x)+2);
      
    }
    
   /* void inorderSearch(TreeNode* root)
    {
       inorderSearch(root->left);
       set1.insert(root->val);
       inorderSearch(root->right);
    }
    */
    
    FindElements(TreeNode* root) {
        // rootGlobal = root;
         inorderDetox(root,0); 
        // inorderSearch(root);
       
       
    }
    
    bool find(int target) {
        targetGlobal = target;
       // bool ans= inorderSearch(root, target);
      
       if(set1.find(target)!=set1.end()) return true;
        return false;
        
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */