class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int i,begin=1,last=1;
            int l=nums.size();
            vector<int> v(l,1);
            for(i=0;i<l;i++)
            {
                    v[i]*=begin;
                    begin*=nums[i];
            }
            for(i=l-1;i>=0;i--)
            {
                    v[i]*=last;
                    last*=nums[i];
            }
            return v;
        
    }
};