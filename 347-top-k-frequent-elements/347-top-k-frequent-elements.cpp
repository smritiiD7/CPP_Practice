typedef pair<int,int> pp;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pp> pq;
        unordered_map<int,int> mp;
        for(int i: nums)
        {
            mp[i]++;
        }
        for(auto i : mp)
        {
            pq.push({i.second,i.first});
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};