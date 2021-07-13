class Solution {
public:
   static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second==b.second)
        return a>b;   
        else
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto k: mp)
        {
            v.push_back(make_pair(k.first,k.second));
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> ans;
        for(int j=0;j<v.size();j++)
        {
            while(v[j].second>0)
            {
                ans.push_back(v[j].first);
                    v[j].second--;
            }
        }
        return ans;
    }
};