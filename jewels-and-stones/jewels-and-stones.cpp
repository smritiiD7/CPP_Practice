class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        int cnt=0,i;
        for(i=0;i<jewels.length();i++)
        {
                mp[jewels[i]]++;
        }
        for(i=0;i<stones.length();i++)
        {
            if(mp.find(stones[i])!=mp.end())
                cnt++;
        }
        return cnt;
        
    }
};