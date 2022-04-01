class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> s;
        int maxi = 0;
        int i = prices.size()-2;
        s.push(prices[i+1]);
        while(i>=0)
        {
            if(prices[i]<=s.top())
            {
                maxi = max(maxi,abs(s.top()-prices[i]));
            }
            else
                s.push(prices[i]);
            i--;
        }
        return maxi;
        
    }
};