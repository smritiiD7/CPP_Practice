class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int i,maxpro=0;
            for(i=1;i<prices.size();i++)
            {
                  if(prices[i]>prices[i-1])
                  {
                          maxpro+=prices[i]-prices[i-1];
                  }
            }
            return maxpro;
        
    }
};