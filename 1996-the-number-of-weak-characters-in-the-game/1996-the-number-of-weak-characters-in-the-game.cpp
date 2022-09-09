class Solution {
public:
   static bool comp(vector<int> &a, vector<int> &b)
    {
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& ppt) {
        sort(ppt.begin(),ppt.end(),comp);
        int ans=0;
        int n = ppt.size();
        int maxi=ppt[n-1][1];
        for(int i=n-1;i>=0;i--){
            if(ppt[i][1]<maxi) ans++;
        maxi = max(maxi,ppt[i][1]);
        }
        
        return ans;
    }
};