/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
      stack<Node*> q;
        if(root==NULL) return {};
        vector<int> ans;
      q.push(root);
      while(q.empty()==false)
      {
              Node* curr = q.top();
              q.pop();
              ans.push_back(curr->val);
              for(int k=(curr->children).size()-1 ; k>=0 ;k--)
              {
                  q.push(curr->children[k]);
              }
      }
        return ans;
    }
};