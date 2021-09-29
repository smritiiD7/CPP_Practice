class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row,col;
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                    //break;
                }
            }
        }
        for(i=0;i<matrix.size();i++)
        {
            if(row.find(i)!=row.end())
            for(j=0;j<matrix[0].size();j++)
            {
               matrix[i][j]=0; 
            }
        }
        for(j=0;j<matrix[0].size();j++)
        {
            if(col.find(j)!=col.end())
            for(i=0;i<matrix.size();i++)
            {
                matrix[i][j]=0;
            }
        }
    }
};