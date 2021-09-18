class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
         vector<int> ans;
        unordered_map<int ,int> mp;
        if(c.size()%2!=0)
            return ans;
        sort(c.begin(),c.end(),greater<int>());
        for(int i=0;i<c.size();i++)
        {
            if(mp.find(2*c[i])!=mp.end() && mp[2*c[i]]!=0)
            {
                ans.push_back(c[i]);
                mp[2*c[i]]--;
            }
            else
                mp[c[i]]++;
        }
        if(ans.size()!=c.size()/2) return vector<int> {};
        return ans;
    }
};