class Solution {
public:
    bool ekNikalneKeBaadPalindromehaiYaNahi(string s , int i ,int j )
    {
        while(i<j)
        {
            if(s[i]==s[j]){
            i++,j--;
            }
            else return false;
        }
        return true;
        
    }
    bool validPalindrome(string s) {
        int i = 0,j=s.length()-1;
        while(i<j)
        {
            if(s[i] == s[j] )
            {
                i++;
                j--;
            }
            else
                
                return ekNikalneKeBaadPalindromehaiYaNahi(s,i+1,j) || ekNikalneKeBaadPalindromehaiYaNahi(s,i,j-1);
        }
        return true;
    }
};