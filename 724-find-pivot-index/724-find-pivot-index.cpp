class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ps=0,ss=0;
        if(nums.size()<2) return 0;
        
        for(int i=1;i<nums.size();i++)
        {
            ss+=nums[i];
        }
        if(ps == ss) return 0;
        
        for(int i=1;i<nums.size();i++)
        {
            ps+=nums[i-1];
            ss-=nums[i];
            if(ps==ss)
                return i;
        }
        return -1;
    }
};