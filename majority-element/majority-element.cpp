class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i,freq=floor(nums.size()/2),ans;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto j: mp)
        {
            if(j.second>freq)
            {
                ans=j.first;
                break;
            }
        }
        return ans;
        
    }
};