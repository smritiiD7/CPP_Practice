class Solution {
public:
    int minOperations(string s) {
            int i,res=0,l=s.length();
            for(i=0;i<s.length();i++)
            {
                    if(s[i]-'0'!=i%2)
                            res++;
            }
            int ans=min(res,l-res);
            return ans;
            
    }
};