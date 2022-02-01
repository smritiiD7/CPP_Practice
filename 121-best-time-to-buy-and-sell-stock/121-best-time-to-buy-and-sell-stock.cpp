class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=INT_MAX,ans=0;
        for(int i=0;i<p.size()-1;i++)
        {
            mini=min(p[i],mini);
            ans=max(ans,p[i+1]-mini);
        }
        return ans;
    }
};