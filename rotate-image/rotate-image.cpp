class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        reverse(matrix.begin(),matrix.end());
        for(i=0;i<matrix.size();i++)
        {
            for(j=i;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};