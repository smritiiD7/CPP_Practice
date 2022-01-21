class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        priority_queue<int> pq(s.begin(),s.end());
        if(pq.size() ==2 || pq.size() == 1) return pq.top();
        pq.pop();
        pq.pop();
        return pq.top();
    }
};