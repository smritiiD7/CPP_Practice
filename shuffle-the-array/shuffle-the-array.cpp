class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
     if(nums.size()<=2)
         return nums;
      int i=0,j=nums.size()/2;
        while(j<nums.size())
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};