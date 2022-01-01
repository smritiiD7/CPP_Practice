class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int> pq;
        int sum=0;
        for(int i=0;i<piles.size();i++)
        {
            pq.push(piles[i]);
        }
        for(int i=0;i<k;i++)
        {
            int top = pq.top();
            pq.pop();
            int remove = floor(top/2);
            int put = top - remove;
            pq.push(put);
        }
        while(pq.size()>0)
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};