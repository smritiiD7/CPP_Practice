class Solution {
public:
    int maxSumSubarray(vector<int> &nums)
    {
      int currentMax=nums[0];
      int overAllMax=nums[0];
      for(int i=1;i<nums.size();i++)
      {
          if(currentMax+nums[i]> nums[i])
          {
              currentMax+=nums[i];
              overAllMax= max(currentMax,overAllMax);
          }
          else
          {
              currentMax = nums[i];
              overAllMax = max(currentMax,overAllMax);
          }
      }
        return overAllMax;
    }
    
    
    int minSumSubarray(vector<int> &nums)
    {
        int currentMin=nums[0];
        int overAllMin=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(currentMin+nums[i]<nums[i])
            {
                currentMin+=nums[i];
                overAllMin=min(currentMin, overAllMin);
            }
            else
            {
                currentMin = nums[i];
                overAllMin=min(currentMin,overAllMin);
            }
        }
        return overAllMin;
    }
    
    int OverAllSum(vector<int> &nums)
    {
        int sum=0;
        for(int i : nums)
        {
            sum+=i;
        }
        return sum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = maxSumSubarray(nums);
        int mini = minSumSubarray(nums);
        int sum = OverAllSum(nums);
        if(mini == sum) return maxi;
        else return max(maxi,sum-mini);
    }
};