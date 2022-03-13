class Solution {
public:
    bool isValid(string s) {
         int i,l=s.length();
            vector<char> v;
            if(l==1)
                    return false;
          
            for(i=0;i<l;i++)
            {
                    if(s[i]=='(')
                    {
                            v.push_back(')');
                    }
                   else if(s[i]=='{')
                    {
                            v.push_back('}');
                    }
                   else if(s[i]=='[')
                    {
                            v.push_back(']');
                    }
                   else
                   {
                           if((v.empty())||(s[i]!=v[v.size()-1]))
                            return false;
                            v.pop_back();
                    
                   }
            }
           
            return v.empty();
        
    }
};