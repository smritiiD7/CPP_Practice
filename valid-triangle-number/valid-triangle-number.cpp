class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,l,r,cnt=0;
        for(i=nums.size()-1;i>=0;i--)
        {
            l=0;
            r=i-1;
            while(l<r)
            {
                if(nums[l]+nums[r]>nums[i])
                {
                    cnt+=(r-l);
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        
        return cnt;
    }
};