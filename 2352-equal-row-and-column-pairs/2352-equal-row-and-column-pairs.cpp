class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
      map<vector<int>,int> mp;
      int ans=0;
     for(int i=0;i<grid.size();i++)
     {
         vector<int> temp;
         for(int j=0;j<grid[0].size();j++)
         {
             temp.push_back(grid[i][j]);
         }
         
         mp[temp]++;
     }
        
     for(int i=0;i<grid.size();i++)
     {
         vector<int> temp;
         for(int j=0;j<grid[0].size();j++)
         {
             temp.push_back(grid[j][i]);
         }
         
        ans+=mp[temp];
     }
        
        
        return ans;
    }
};