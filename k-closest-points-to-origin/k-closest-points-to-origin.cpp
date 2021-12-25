class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>> pq;
        for(auto p : points)
        {
            int x = p[0] , y = p[1];
            int dis = x*x + y*y;
            pq.push({dis,x,y});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>> ans(k);
        for(int i=0;i<k;i++)
        {
            vector<int> top = pq.top();
            ans[i]={top[1],top[2]};
            pq.pop();
        }
        return ans;
        
        }
};