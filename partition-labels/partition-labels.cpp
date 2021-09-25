class Solution {
public:
    vector<int> partitionLabels(string s) {
      unordered_map<char,int> mp;
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]=i;
        }
        int maxIndex=0,LastIndex=0;
        for(int i=0;i<s.length();i++)
        {
            maxIndex=max(maxIndex,mp[s[i]]);
            if(i==maxIndex)
            {
                ans.push_back(maxIndex-LastIndex+1);
                LastIndex=i+1;
            }
            
        }
        return ans;
    }
};