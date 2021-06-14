class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        int d=nums.size();
      if(nums==v)
            return true;
        int i,j;
        for(i=0;i<d;i++)
        {
           j=0;
           int temp= nums[0];
            while(j<nums.size()-1)
            {
                nums[j]=nums[j+1];
                j++;
            }
            nums[j]=temp;
            if(nums==v)
                return true;
            
        }
        return false;
    }
};