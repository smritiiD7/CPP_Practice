class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ex;
        int m=grid.size();
        int n=grid[0].size();
        while(k){
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                swap(grid[m-1][n-1],grid[i][j]);
            }
        }
            k--;
        }
            return grid;
        }
    
};