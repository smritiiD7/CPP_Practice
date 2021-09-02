class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
     stack<int> s;
     vector<int> v;
        int i,diff,n=prices.size();
        for(i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(prices[i]);
            }
            else if(s.size()>0&&s.top()<=prices[i])
            {
                diff=prices[i]-s.top();
                v.push_back(diff);
            }
            else if(s.size()>0&&s.top()>prices[i])
            {
                while(s.size()>0 && s.top()>prices[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                    v.push_back(prices[i]);
                else
                    v.push_back(prices[i]-s.top());
            }
            s.push(prices[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};