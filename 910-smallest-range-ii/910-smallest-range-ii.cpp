class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
      
        int n = nums.size();
        int mini, maxi;
      sort(nums.begin(),nums.end());
          int ans= nums[n-1]-nums[0];
      for(int i=0;i<nums.size()-1;i++)
      {
           mini = min(nums[0]+k, nums[i+1]-k);
           maxi = max(nums[n-1]-k, nums[i]+k);
           ans = min(ans, maxi-mini);
      }
       
        return ans;
    }
};