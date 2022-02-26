class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
                cnt++;
            if(cnt>1||(i-1>0 && i+1 <nums.size() && nums[i+1]<nums[i-1] && nums[i]<nums[i-2] ))
                return false;
        }
        return true;
    }
};