class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      unordered_map<int,int> mp;
        int ans=INT_MIN;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) sum++;
            else sum--;
            if(mp.find(sum)==mp.end())
                mp[sum]=i;
            if(mp.find(sum)!=mp.end())
                ans=max(ans,i-mp[sum]);
        }
        return ans;
    }
};