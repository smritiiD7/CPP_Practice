class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> winners;
        vector<int> wins , lose;
        vector<vector<int>> ans;
        map<int,int> losers;
        
        for(int i=0;i<matches.size();i++)
        {
            winners.insert(matches[i][0]);
        }
        
        for(int i=0;i<matches.size();i++)
        {
            if(winners.find(matches[i][1])!=winners.end())
            {
                winners.erase(matches[i][1]);
            }
             losers[matches[i][1]]++;
        }
        for(auto i : winners)
        {
           wins.push_back(i); 
        }
        
        for(auto i : losers)
        {
         if(i.second==1)
             lose.push_back(i.first);
        }
        ans.push_back(wins);
        ans.push_back(lose);
        return ans;
    }
};