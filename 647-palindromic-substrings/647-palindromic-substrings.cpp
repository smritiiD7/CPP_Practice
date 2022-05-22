class Solution {
public:
    bool IsPalindrome(string &s)
    {
        int i=0,j= s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ans=0;
        int n = s.length();
        for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
            string k = s.substr(i, len);
            if(IsPalindrome(k)==true) ans++;
        }
          //  cout << s.substr(i, len) << endl;
            }
        return ans;
        
    }
};