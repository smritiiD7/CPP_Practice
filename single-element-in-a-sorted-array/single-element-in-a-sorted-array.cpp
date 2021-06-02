class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int j=0;
        for(int i: nums)
        {
            j^=i;
        }
        return j;
        
    }
};