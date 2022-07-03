class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      int numberofSubset =  pow(2,nums.size());
        vector<vector<int>> ans;
      int n = nums.size();
      int x =0;
      while(x<numberofSubset)
      {
          vector<int> temp;
          for(int j=0;j<n;j++)
          {
              if(x & (1 << j))
              {
                  temp.push_back(nums[j]);
              }
          }
          
          ans.push_back(temp);
          x++;
      }
        return ans;
    }
};