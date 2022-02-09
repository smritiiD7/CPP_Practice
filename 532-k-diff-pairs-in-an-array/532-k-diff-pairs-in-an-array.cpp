class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            if(k==0)
            {
                if(i.second >1)
                    cnt++;
            }
            else
            {
                if(mp.find(i.first - k)!=mp.end())
                    cnt++;
            }
        }
        return cnt;
    }
};