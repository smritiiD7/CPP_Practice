class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
       // row wise
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                matrix[i][j]^=matrix[i][j-1];
            }
        }
        
        priority_queue<int,vector<int>,greater<int>> pq;
         //column wise
        for(int j=0;j<n;j++)
        {
            for(int i=1;i<m;i++)
            {
                matrix[i][j]^=matrix[i-1][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                pq.push(matrix[i][j]);
            }
        }
         while(pq.size()>k){
            pq.pop();
        }
        
        return pq.top();
    }
};