class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        int i;
        for(i=0;i<nums.size();i++)
        {
            int put=nums[nums[i]];
            v.push_back(put);
        }
        return v;
    }
};