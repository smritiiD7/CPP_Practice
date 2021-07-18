class Solution {
public:
    int findPairs(vector<int>& nums, int ki) {
        unordered_map<int,int> mp;
        int cnt=0;
        for(auto i: nums)
        {
            mp[i]++;
        }
            if(ki>0)
            {
                for(auto k: mp)
                if(mp.find(k.first+ki)!=mp.end())
                {
                    cnt++;
                }
            }
            else{
                for(auto k: mp)
                if(k.second>1)
                {
                    cnt++;
                }
            }
    
        return cnt;
    }
};