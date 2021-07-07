class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int> mp;
        int i,ans=0;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto k: mp)
        {
            if(k.second==1)
            {
                ans+=k.first;
            }
        }
        return ans;
    }
};