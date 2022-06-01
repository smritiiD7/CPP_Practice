class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            long long mini = nums[i];
            long long maxi = nums[i];
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(mini > nums[j])
                {
                    mini = nums[j];
                }
                if(maxi < nums[j])
                {
                    maxi = nums[j];
                }
                
                ans+=maxi-mini;
            }
        }
        return ans;
    }
};