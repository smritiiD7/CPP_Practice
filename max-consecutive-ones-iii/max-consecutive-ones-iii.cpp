class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=-1,i;
        int cnt=0,ans=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                cnt++;
            }
            while(cnt>k)
            {
                j++;
                if(nums[j]==0)
                {
                    cnt--;
                }
            }
            int len=i-j;
            if(len>ans)
            {
                ans=len;
            }
        }
        return ans;
    }
};