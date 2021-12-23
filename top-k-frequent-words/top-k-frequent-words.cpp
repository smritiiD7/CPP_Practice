class Solution {
public:
    bool  static cmp(pair<string,int> a, pair<string,int> b)
    {
        if(a.second>b.second)
            return true;
        if(a.second == b.second)
        {
            if(a.first < b.first)
                return true;
            return false;
        }
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        vector<string> ans;
        for(string s : words)
        {
            mp[s]++;   
        }
        vector<pair<string,int>> vp;
        for(auto i: mp)
        {
            vp.push_back({i.first,i.second});
        }
        sort(vp.begin(),vp.end(),cmp);
        for(int i=0;i<k;i++)
        {
            ans.push_back(vp[i].first);
        }
        return ans;
    }
};