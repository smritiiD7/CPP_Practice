class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row, col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            if(row.find(i)!=row.end())
            {
               for(int j=0;j<matrix[0].size();j++)
               {
                   matrix[i][j] =0;
               }
            }
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            if(col.find(j)!=col.end())
            {
               for(int i=0;i<matrix.size();i++)
               {
                   matrix[i][j] =0;
               }
            }
        }
        
        
    }
};