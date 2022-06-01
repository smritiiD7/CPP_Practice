class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int cummulativeSum=nums[0];
      for(int i=1;i<nums.size();i++)
      {
          cummulativeSum+=nums[i];
          nums[i]=cummulativeSum;   
      }
        return nums;
    }
};