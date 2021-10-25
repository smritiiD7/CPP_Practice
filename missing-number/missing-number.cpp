class Solution {
public:
    int missingNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int expected=0;
        for(int i: nums)
        {
            if(expected!=i)
            {
                return expected;
            }
            expected++;
        }
        return expected++;
    }
};