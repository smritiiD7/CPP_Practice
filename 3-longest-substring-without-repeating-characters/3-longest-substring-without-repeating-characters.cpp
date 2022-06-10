class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        set<char> set1;
        int ans = INT_MIN;
        int i=0,j=0, n=s.length();
        while(i<n && j<n)
        {
          if(set1.find(s[j])==set1.end())
          {
               set1.insert(s[j++]);
              ans = max(ans, j-i);
             
          }
            else
            {
                set1.erase(s[i++]);
                //i++;
            }
        }
        return ans;
    }
};