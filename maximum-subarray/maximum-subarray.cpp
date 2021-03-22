class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            //kadane's algo
            int i,currentBest=nums[0],overallBest=nums[0];
            if(nums.size()==1)
                    return nums[0];
            for(i=1;i<nums.size();i++)
            {
                    if(currentBest+nums[i]>nums[i])
                    {
                            currentBest+=nums[i];
                            overallBest=max(currentBest,overallBest);
                    }
                    else{
                            currentBest=nums[i];
                            overallBest=max(overallBest,currentBest);
                    }
            }
            return overallBest;
        
    }
};