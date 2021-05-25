class Solution {
public:
    int maxCoins(vector<int>& piles) {
      int l=piles.size()-1,i=0,j=l-1,k=l;
        sort(piles.begin(),piles.end());
        int ans=0;
        while(i<j)
        {
            ans+=piles[j];
            j-=2;
            k-=2;
            i++;
        }
        return ans;
        
    }
};