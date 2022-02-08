class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if(nums.size()==0) return {-1,-1};
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
            if( i == nums.size()-1 && nums[i]!=target)
                return {-1,-1};
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};