class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,major=nums[0],cnt=1;
        for(i=1;i<nums.size();i++)
        {
            if(cnt==0)
            {
              cnt++;
                major=nums[i];
            }
           else if(major==nums[i])
            {
                cnt++;
            }
            else
                cnt--;
        }
        return major;
        
    }
};