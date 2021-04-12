class Solution {
public:
    int minStartValue(vector<int>& nums) {
            int sum=0,mini=0;
            for(int i:nums)
            {
                    sum+=i;
                    if(sum<mini)
                    {
                            mini=sum;
                    }
            }
            int ans=-mini+1;
            return ans;
        
    }
};