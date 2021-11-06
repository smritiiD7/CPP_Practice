class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto k : mp)
        {
           if(k.second==1)
           {
               ans.push_back(k.first);
           }
            if(ans.size()==2)
                break;
        }
        return ans;
    }
};