class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i: nums)
        {
            mp[i]++;
        }
        for(auto k: mp)
        {
          int n=k.second;
            cnt+=n*(n-1)/2;
        }
        return cnt;
    }
};