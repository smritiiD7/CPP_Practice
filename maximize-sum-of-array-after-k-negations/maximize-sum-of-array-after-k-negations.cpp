class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int index=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++)
        {
            nums[index]=-nums[index];
            if(index+1<nums.size())
            {
                if(nums[index+1]<nums[index])
                {
                    index++;
                }
            }
        }
        int sum=accumulate(nums.begin(),nums.end(),0);
        return sum;
    }
};