class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int cummulativeSum=0;
        for(int i=0;i<nums.size();i++)
        {
            cummulativeSum+=nums[i];
            nums[i]=cummulativeSum;
        }
        return nums;
    }
};