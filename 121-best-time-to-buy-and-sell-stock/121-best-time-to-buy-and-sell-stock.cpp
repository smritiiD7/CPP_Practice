class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> s;
        int ans = 0;
        int i = prices.size() -2;
        s.push(prices[i+1]);
        
        while(i>=0)
        {
            if(prices[i]<= s.top())
            {
                ans = max (ans , s.top()- prices[i]);
            }
            else
                s.push(prices[i]);
            i--;
        }
        return  ans;
    }
};