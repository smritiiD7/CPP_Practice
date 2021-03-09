class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length()==0)
            return 0;
        if(isPalindrome(s))
        {
            return 1;
        }
        return 2;
    }
    bool isPalindrome(string s)
    {
        int l=0,r=s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};