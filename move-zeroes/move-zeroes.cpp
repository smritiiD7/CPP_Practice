class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,zero=0;
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                v.push_back(nums[i]);
            }
            else
                zero++;
        }
        for(int j=0;j<zero;j++)
        {
            v.push_back(0);
        }
        for(i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }
        
    }
};