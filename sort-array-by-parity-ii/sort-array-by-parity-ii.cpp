class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i,j;
        vector<int> v1,v2,v3;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v1.push_back(nums[i]);
            }
            else
                v2.push_back(nums[i]);
        }
        for(i=0,j=0;i<v1.size(),j<v2.size();i++,j++)
        {
            v3.push_back(v1[i]);
            v3.push_back(v2[j]);
        }
        return v3;
        
    }
};