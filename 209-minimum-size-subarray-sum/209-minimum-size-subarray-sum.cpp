class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int left=0,right=0;
       int sum=0,ans=INT_MAX;
        while(right<nums.size())
        {
            sum+=nums[right++];
            while(sum>=target)
            {
                ans= min(ans,right-left);
                //sum+=nums[right++];
                  sum-=nums[left++];
            }
          
        }
        
        return ans==INT_MAX ? 0: ans;
    }
};