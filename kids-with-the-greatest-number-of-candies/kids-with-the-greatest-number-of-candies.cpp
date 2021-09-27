class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi,sum=0;
        maxi=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            candies[i]+=extraCandies;
            if(candies[i]>=maxi)
            {
               // maxi=candies[i];
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        return ans;
    }
};