class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int i,j=0,ans;
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
        
    }
};