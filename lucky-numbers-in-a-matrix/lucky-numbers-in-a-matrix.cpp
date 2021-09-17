class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
      int i,j,mini=INT_MAX,maxi=INT_MIN;
      set<int> s;
        vector<int> ans;
        for(i=0;i<matrix.size();i++)
        {
            mini=INT_MAX;
            for(j=0;j<matrix[0].size();j++)
            {
                mini=min(matrix[i][j],mini);
            }
            s.insert(mini);
        }
       
        for(j=0;j<matrix[0].size();j++)
        {
             maxi=INT_MIN;
            for(i=0;i<matrix.size();i++)
            {
                maxi=max(matrix[i][j],maxi);
            }
            if(s.find(maxi)!=s.end())
            {
                ans.push_back(maxi);
            }
        }
        return ans;
        
    }
};