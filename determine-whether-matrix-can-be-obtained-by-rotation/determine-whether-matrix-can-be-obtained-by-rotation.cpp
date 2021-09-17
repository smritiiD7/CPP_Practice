class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int d=4;
        while(d>0)
        {
            reverse(mat.begin(),mat.end());
            for(int i=0;i<mat.size();i++)
            {
                for(int j=i+1;j<mat[0].size();j++)
                {
                    swap(mat[i][j],mat[j][i]);
                }
            }
            if(mat==target)
            {
                return true;
            }
            d--;
        }
        return false;
    }
};