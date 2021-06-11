class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> mp;
        int i,freq=floor(nums.size()/3),ans;
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto j: mp)
        {
            if(j.second>freq)
            {
                ans=j.first;
                v.push_back(ans);
            }
        }
        return v;
        
    }
    
};