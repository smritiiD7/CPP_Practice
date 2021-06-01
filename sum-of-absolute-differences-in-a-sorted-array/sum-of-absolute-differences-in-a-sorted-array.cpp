class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int i,sum=0,l=nums.size(),sumbelow=0;
        vector<int> v;
        sum=accumulate(nums.begin(),nums.end(),0);
        for(i=0;i<nums.size();i++)
        {
            int k=nums[i];
            sum-=nums[i];
            nums[i]=sum-k*(l-i-1)+i*k-sumbelow;
            sumbelow+=k;
            v.push_back(nums[i]);
        }
        return v;
        
    }
};