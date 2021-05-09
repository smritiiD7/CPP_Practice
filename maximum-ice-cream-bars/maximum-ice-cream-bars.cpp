class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int i,cnt=0;
        sort(costs.begin(),costs.end());
        for(i=0;i<costs.size();i++)
        {
            if(costs[i]<=coins)
            {
                cnt++;
                coins-=costs[i];
            }
            if(coins<=0)
            {
                break;
            }
        }
        return cnt;
    }
};