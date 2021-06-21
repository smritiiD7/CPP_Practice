class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int prefixSum=0,sum=0;
        int i,j;
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            prefixSum=0;
            for(j=i;j<nums.size();j++)
            {
                prefixSum+=nums[j];
                v.push_back(prefixSum);
            }
        }
        sort(v.begin(),v.end());
        for(i=left-1;i<right;i++)
        {
            sum+=v[i];
             sum=sum%1000000007;
        }
       
        return sum;
        
    }
};