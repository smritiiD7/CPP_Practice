class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i: stones)
            pq.push(i);
        while(pq.size()>1)
        {
            int y = pq.top();
            pq.pop();
            int x= pq.top();
            if(x == y)
                pq.pop();
            else if(x!=y)
            {
                pq.pop();
                y=y-x;
                pq.push(y);
            }
        }
        if(pq.size() ==0) return 0;
        else return pq.top();
    }
};