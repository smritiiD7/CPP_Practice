class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini=nums[0],maxi=nums[0],i,res = nums[0];
        for(i=1;i<nums.size();i++)
        {
            if(nums[i] < 0)
            {
                swap(mini,maxi);
            }
            maxi = max(nums[i], maxi*nums[i]);
            mini = min(nums[i], mini*nums[i]);  
            res = max(res,maxi);
        }
        return res;
    }
};