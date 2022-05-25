class Solution {
public:
    int beautySum(string s) {
      unordered_map<char,int> mp;
        int ans=0;
      for(int i=0;i<s.length();i++)
      {
          for(int j=i;j<s.length();j++){
                mp[s[j]]++;
          int mini = INT_MAX, maxi = INT_MIN;
          
          for(auto i : mp)
          {
              mini = min(mini,i.second);
              maxi = max(maxi,i.second);
          }
          ans+=(maxi-mini);
          }
          mp.clear();
      }
        return ans;
    }
};