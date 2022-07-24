class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m = 0, n = matrix[0].size()-1;
        
      while(m<=matrix.size()-1 && n>=0)
      {
          if(target == matrix[m][n]) return true;
          if(target < matrix[m][n]) n--;
          else m++;
      }
        return false;
    }
};