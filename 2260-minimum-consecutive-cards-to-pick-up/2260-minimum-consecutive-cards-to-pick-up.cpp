class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       unordered_map<int,vector<int>> mp;
        int ans=INT_MAX;
        for(int i=0;i<cards.size();i++)
        {
            mp[cards[i]].push_back(i);
        }
        
        for(auto i: mp){
            auto v = i.second;
            
            if(v.size()>1)
            {
                for(int i =1;i<v.size();i++)
                {
                    ans=min(ans,v[i]-v[i-1]+1);
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};