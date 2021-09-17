class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        vector<int> ans;
        int i,j;
        for(i=0;i<mat.size();i++)
        {
          int soldier=0;
           for(j=0;j<mat[i].size();j++)
            {
               if(mat[i][j]==0)
                   break;
              soldier++;  
            }
            s.insert({soldier,i});
        }
        for(auto it= begin(s);k>0;it++,k--)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};