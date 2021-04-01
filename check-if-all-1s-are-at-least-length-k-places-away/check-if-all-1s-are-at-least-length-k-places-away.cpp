class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
            int i,j;
            if(k==0)
            {
                    return true;
            }
            for(i=0;i<nums.size()-1;i++)
            {
                    if(nums[i]==1)
                    {
                            for(j=i+1;j<nums.size();j++)
                            {
                                    if(nums[j]==1&&j-i-1<k)
                                    {
                                            return false;
                                    }
                            }
                    }
            }
            return true;
        
    }
};