class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto i: s)
        {
            mp[i]++;
        }
        vector<pair<int,char>> f;
        for(auto k=mp.begin();k!=mp.end();k++)
        {
            f.push_back(make_pair(k->second,k->first));
        }
        sort(f.rbegin(),f.rend());
        s.clear();
        for(int i=0;i<f.size();i++)
        {
            int e=f[i].first;
            while(e--)
            {
                s+=f[i].second;
            }
        }
        return s;
        
        
    }
};