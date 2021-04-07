class Solution {
public:
    bool halvesAreAlike(string s) {
            int i,j,l=s.length(),ci=0,cj=0;
            for(i=0,j=l-1;i<=(l-1)/2,j>(l-1)/2;i++,j--)
            {
                   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                            ci++;
                    }           if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
                    {
                            cj++;
                    }
                            
                            
            }
            if(ci==cj)
                    return true;
            return false;
        
    }
        
    
};