class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
       unordered_map<int,int> mp;
        vector<int> ans;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(int i: nums)
        {
            if(mp[i]==1){
                int x1=i-1,x2=i+1;
            if(mp.find(x1)==mp.end() && mp.find(x2)==mp.end())
                ans.push_back(i);
            }
        }
        return ans;
    }
};