class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
       for(int i=0;i<nums.size();i++)
       {
           nums[i]=nums[i]+ (nums[nums[i]]%n)*n;
       }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]/n;
        }
        return nums;
    }
};