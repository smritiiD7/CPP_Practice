class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0,l=k;
        string s1;
        while(k!=0&&i<s.length())
        {
              s1+=s[i];
            i++;
             if(s[i]==' ')
            {
                k--;
            }
           
        }
        return s1;
        
    }
};