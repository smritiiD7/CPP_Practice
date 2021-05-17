class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i,j;
        vector<int> v;
        for(i=0;i<nums.size();i=i+2)
        {
            while(nums[i])
            {
                v.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        return v;
        
    }
};