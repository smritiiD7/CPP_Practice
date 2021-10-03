class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int currSum=accumulate(rolls.begin(),rolls.end(),0);
        int missSum=mean*(n+rolls.size())-currSum;
        if(missSum<n || missSum>6*n)
            return {};
        vector<int> ans(n,missSum/n);
        int left=missSum%n;
        for(int i=0;i<left;i++)
        ans[i]+=1;
        return ans; 
    }
};