class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length();
        unordered_set<char> s1;
        int ans=0;
        while( i<n && j<n)
        {
            if(s1.find(s[j]) == s1.end())
            {
              s1.insert(s[j++]);
              ans = max(ans,j-i);
            }
            else
            {
               s1.erase(s[i++]);
            }
        }
        return ans;
    }
};