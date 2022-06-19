class Solution {
public:
    bool isSubsequence(string s, string t) {
       int size=0;
       int i =0, j =0;
       while(i<s.length() && j<t.length())
       {
           if(s[i]!=t[j])
           {
               j++;
           }
           
           if(s[i] == t[j])
           {
               i++;j++;size++;
           }
       }
        
        return size==s.length()?true:false;
    }
};