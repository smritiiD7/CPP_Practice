class Solution {
public:
    int minCost(string s, vector<int>& cost) {
     int i,l=s.length(),mini=0,fill=0,maxi=0;
        vector<int> v;
        for(i=0;i<s.length();i++)
        {
          if(s[i]==s[i+1])
          {
              mini+=min(cost[i],cost[i+1]);
              cost[i+1]=max(cost[i],cost[i+1]);
              
          }
       }
        return mini;
    }
};