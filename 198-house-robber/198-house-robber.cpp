class Solution {
public:
    int rob(vector<int>& v) {
        int prev=v[0];
        int prev2 = 0;
        for(int i=1;i<v.size();i++)
        {
            int take=v[i];
            if(i>1) take+=prev2;
            int nottake=0+prev;
            int curri = max(take,nottake);
            prev2=prev;
            prev=curri;
        }
        return prev;
    }
};