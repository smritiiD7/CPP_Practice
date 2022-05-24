class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       queue<pair<int,int>> pq;
       vector<int> ans;
        pq.push({0,0});
        
        while(pq.empty()==false){
            auto [x,y] = pq.front();
            ans.push_back(nums[x][y]);
            
            if(y==0 && x+1<nums.size())
            {
                pq.push({x+1,y});
            }
            
            if(y+1<nums[x].size())
            {
                pq.push({x,y+1});
            }
            
            pq.pop();
        }
        return ans;
    }
};