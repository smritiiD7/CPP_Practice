class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int i,j;
        int subsets=pow(2,nums.size());
        for(i=0;i<subsets;i++)
        {
            vector<int> temp;
            for(j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                   {
                      temp.push_back(nums[j]); 
                   }
            }
          sort(temp.begin(),temp.end());
           s.insert(temp);
        }
        for(auto &i: s)
        {
            ans.push_back(i);
        }
        return ans;
        
    }
};