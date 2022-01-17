typedef pair<int,int> pp;
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pp,vector<pp>,greater<pp>> pq;
        vector<int> v;
        for(int i=0;i<arr.size();i++)
        {
            int n = arr[i];
            unsigned int count = 0;
            while (n) {
            count += n & 1;
            n >>= 1;  
            }
            pq.push({count,arr[i]});
        }
        while(!pq.empty())
        {
            int curr = pq.top().second;
            pq.pop();
            v.push_back(curr);
        }
        
    return v;
        }
    
};