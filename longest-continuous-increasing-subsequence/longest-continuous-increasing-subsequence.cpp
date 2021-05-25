class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i,cnt=1,maxi=INT_MIN;
        if(nums.size()==1)
            return 1;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                cnt++;
            }
            else
                cnt=1;
            maxi=max(cnt,maxi);
        }
        return maxi;
    }
};