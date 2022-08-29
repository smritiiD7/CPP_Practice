class Solution {
public:
    bool isValid(string s) {
      vector<char> v;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='(')
             v.push_back(')');
        else if(s[i]=='[')
            v.push_back(']');
        else if(s[i]=='{')
            v.push_back('}');
        else
        {
            if(v.empty()==true || s[i]!=v.back())return false;
            v.pop_back();
        }
     }
        return v.empty();
    }
};