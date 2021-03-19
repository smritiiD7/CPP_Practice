class Solution {
public:
    int maximumProduct(vector<int>& nums) {
            int i;
            sort(nums.begin(),nums.end());
            int l=nums.size()-1;
            int ans=nums[l]*nums[l-1]*nums[l-2];
            int ans1=nums[0]*nums[1]*nums[l];
            int ans3=max(ans,ans1);
            return ans3;
        
    }
};