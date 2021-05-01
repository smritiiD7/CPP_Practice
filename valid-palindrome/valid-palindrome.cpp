class Solution {
public:
    bool isPalindrome(string s) {
        int i,j;
        for(i=0,j=s.length()-1;i<j;i++,j--)
        {
            while(isalnum(s[i])==false&&i<j)
            {
                i++;
            }
             while(isalnum(s[j])==false&&i<j)
            {
                j--;
            }
            if(toupper(s[i])!=toupper(s[j]))
                    return false;

        }
        return true;
        
    }
};