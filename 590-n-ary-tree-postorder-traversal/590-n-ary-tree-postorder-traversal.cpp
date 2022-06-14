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
    vector<int> postorder(Node* root) {
        if(root==NULL) return {};
        stack<Node*> st;
        vector<int> ans;
        st.push(root);
        
        while(st.empty() ==false)
        {
            Node* curr = st.top();
            st.pop();
            
            for(int k=0;k<(curr->children).size();k++)
            {
                st.push(curr->children[k]);
            }
             ans.push_back(curr->val);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};