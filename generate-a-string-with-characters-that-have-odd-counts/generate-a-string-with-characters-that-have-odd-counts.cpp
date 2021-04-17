class Solution {
public:
    string generateTheString(int n) {
            string s;
            int i;
            if(n%2==0)
            {
                    for(i=0;i<=n-2;i++)
                    {
                            s+='a';
                    }
                    s+='c';
            }
            else{
                    for(i=0;i<n;i++)
                    s+='a';
            }
            return s;
        
    }
};