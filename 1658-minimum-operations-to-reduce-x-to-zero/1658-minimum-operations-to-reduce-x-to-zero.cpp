class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int TotalSum = 0;
        int restLen=0;
        for(int i : nums)
            TotalSum+=i;
        
        int requiredSum=TotalSum - x;
        if(requiredSum==0) return nums.size();
        
        int i=0,j=0,currSum=0;
        
        for(int j=0;j<nums.size();j++)
        {
            currSum+=nums[j];
            while(i<nums.size() && currSum>requiredSum)
            {
                currSum-=nums[i++];
            }
            
            if(currSum == requiredSum) 
                restLen = max(restLen,j-i+1);
            
        }
        
        if(restLen==0)
            return -1;
        return nums.size() - restLen;
    }
};