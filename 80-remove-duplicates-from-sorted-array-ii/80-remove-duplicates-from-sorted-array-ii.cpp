class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int j=0;
        for(int i: nums)
        {
            mp[i]++;
            if(mp[i]<=2)
            {
                nums[j]=i;
                j++;
            }
        }
        return j;
    }
};