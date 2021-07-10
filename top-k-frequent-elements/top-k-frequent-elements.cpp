class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int i;
        vector<int> ans;
        for(auto i: nums)
        {
            m[i]++;
        }
        vector<pair<int,int>> v;
        for(auto i= m.begin();i!=m.end();i++)
        {
            v.push_back(make_pair(i->second,i->first));
        }
        sort(v.rbegin(),v.rend());
        while(k>0)
        {
            ans.push_back(v[i].second);
            i++;
            k--;
        }
        return ans;
    }
};