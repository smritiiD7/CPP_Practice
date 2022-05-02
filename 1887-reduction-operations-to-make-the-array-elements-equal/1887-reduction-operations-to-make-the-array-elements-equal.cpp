class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int> mp;
        int ans=0,index=0;
        for(int i: nums) mp[i]++;
        for(auto i : mp){
            ans+=i.second*index++;
        }
        return ans;
    }
};