class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int firstindex=INT_MIN,lastindex;
       vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=v[i])
            {
                if(firstindex==INT_MIN)
                {
                    firstindex=i;
                }
                lastindex=i;
               // v[i]=-1;
            }
        }
        if(firstindex==INT_MIN) return 0;
        return lastindex-firstindex+1;
    }
};