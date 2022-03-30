class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j;
        for(i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && target<= matrix[i][matrix[i].size()-1])
            {
                for(j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j] == target)
                        return true;
                }
                break;
            }
        }
        return false;
    }
};