class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
            cnt++;
        }
        for(auto i : mp)
        {
            if(i.second==cnt)
                ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};