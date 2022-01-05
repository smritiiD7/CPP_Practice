class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        priority_queue<pair<int,int>> pq;
        int rank=1;
        for(int i=0;i<n;i++)
        {
            pq.push({score[i],i});
        }
        while(!pq.empty())
        {
            if(rank==1)
            {
                ans[pq.top().second]="Gold Medal";
                pq.pop();
                rank++;
            }
            else if(rank==2)
            {
                ans[pq.top().second]="Silver Medal";
                pq.pop();
                rank++;
            }
            else if(rank==3)
            {
                ans[pq.top().second]="Bronze Medal";
                pq.pop();
                rank++;
            }
            else
            {
                ans[pq.top().second]=to_string(rank);
                pq.pop();
                rank++;
             
            }  
            
        }
        return ans;
        
    }
};