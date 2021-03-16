class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int i;
            int mini=INT_MAX;
            int maxi=0;
            for(i=0;i<prices.size()-1;i++)
            {
                    mini=min(mini,prices[i]);
                    maxi=max(maxi,prices[i+1]-mini);
            }
    
            return maxi;

            
        
    }
};