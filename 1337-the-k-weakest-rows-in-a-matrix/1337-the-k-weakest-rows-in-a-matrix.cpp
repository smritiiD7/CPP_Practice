typedef
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int i,j,sum=0;
        vector<int> v(k);
        for(i=0;i<mat.size();i++)
        {
            sum=0;
            for(j=0;j<mat[0].size();j++)
            {
                if(mat[i][j] ==0)
                    break;
                sum+=mat[i][j];
            }
            pq.push({sum,i});
        }
      for(int i=0;i<k;i++)
        {
            if(pq.empty())break;
            v[i]=pq.top().second;
            pq.pop();
        }
        return v;
        
    }
};