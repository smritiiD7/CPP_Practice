class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int ans=0;
        int left=0,right=0,i=0,n=s.length();
        
        while(right<n)
        {
            mp[s[right]]++;
            while(mp['a'] and mp['b'] and mp['c'])
            {
                ans+=n-right;
                mp[s[left++]]-=1;
            }
            right++;
        }
        return ans;
    }
};