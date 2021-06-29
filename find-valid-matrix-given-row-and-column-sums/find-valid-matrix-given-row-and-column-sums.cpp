class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int nRow=rowSum.size();
        int nCol=colSum.size();
         vector<vector<int>> v(nRow,vector<int>(nCol,0));
        int i=0,j=0;
        while(i<nRow&&j<nCol)
        {
            if(rowSum[i]<colSum[j])
            {
                 v[i][j]=rowSum[i];
                colSum[j]-=rowSum[i];
                rowSum[i++]=0;
            }
            
            else{
                v[i][j]=colSum[j];
                rowSum[i]-=colSum[j];
                colSum[j++]=0;
            }
        }
        return v;
        
    }
};