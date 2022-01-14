class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int cnt=0;
        while(pq.size()>1)
        {
            int top1=pq.top();
            pq.pop();
            int top2=pq.top();
            pq.pop();
            cnt++;
            if(top2>1) pq.push(top2-1);
            if(top1>1) pq.push(top1-1);
        }
        return cnt;
    }
};