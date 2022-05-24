class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       vector<pair<pair<int,int>,int>> v;
        vector<int> ans;
       for(int i=0;i<nums.size();i++)
       {
           for(int j = 0;j<nums[i].size();j++)
           {
               v.emplace_back(make_pair(i+j,j), nums[i][j]);
           }
       }
        
     sort(v.begin(),v.end());
     for(auto i : v)
     {
         ans.push_back(i.second);
     }
        return ans;
    }
};