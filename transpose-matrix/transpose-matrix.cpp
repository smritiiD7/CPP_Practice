class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
               v[j][i]=matrix[i][j];
            }
        }
        return v;
    }
};