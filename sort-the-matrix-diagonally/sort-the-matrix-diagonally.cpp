class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> mp;
        int n=mat.size();
        int m=mat[0].size();
         vector<vector<int>> ans;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int diff=i-j;
                mp[diff].push_back(mat[i][j]);
            }
        }
        for(int range=1-m;range<n;range++)
        {
            sort(mp[range].begin(),mp[range].end());
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                mat[i][j]=mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
       // reverse(mat.begin(),mat.end());
       
        return mat;
    }
};