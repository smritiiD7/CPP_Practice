class Solution {
public:
    int dominantIndex(vector<int>& nums) {
            
            int maxiIndex=max_element(nums.begin(),nums.end())-nums.begin();
            sort(nums.begin(),nums.end());
            int i,l=nums.size();
            if(nums.size()==1)
                    return 0;
            if(nums[l-1]>=2*nums[l-2])
                    return maxiIndex;
        return -1;
    }
};