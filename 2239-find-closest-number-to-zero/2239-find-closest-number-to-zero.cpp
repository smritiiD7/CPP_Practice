class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i: nums)
        {
            if(abs(i)<abs(mini))
            {
                mini = i;
            }
            else if(abs(i) == abs(mini))
            mini = max(mini,i);
        }
        return mini;
    }
};