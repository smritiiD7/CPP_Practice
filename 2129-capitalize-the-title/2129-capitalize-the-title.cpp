class Solution {
public:
    string capitalizeTitle(string t) {
         string extra;
        string ans;
        int j=0,len=0,i;
       for( i=0;i<t.length();i++)
       {
            j=i;
           if(t[j]!=' '){
            len=0;
           while(isalpha(t[j]))
           {
              
               char ch= tolower(t[j]);
                extra+=ch;
               len++;
               j++;
           }
           if(len>2)
           {
               extra[0]=toupper(extra[0]);
           }
           i=j;
           ans+=extra;
               ans+=' ';
           extra.clear();
           }
       }
         if (!ans.empty()) {
        ans.erase(ans.size() - 1);
    }
        return ans;
    }
};