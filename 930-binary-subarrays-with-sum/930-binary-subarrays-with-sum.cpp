class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ps=0,cnt=0;
        unordered_map<int,int> mp;
       // mp[0]++;
        for(int i=0;i<nums.size();i++){
            ps+=nums[i];
            if(mp[ps-goal]>0)
                cnt+=mp[ps-goal];
            if(ps==goal) cnt++;
            mp[ps]++;
        }
        return cnt;
    }
};