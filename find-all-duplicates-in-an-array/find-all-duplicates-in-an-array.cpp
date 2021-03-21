class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            vector<int> v;
            int i;
            for(i=0;i<nums.size();i++)
            {
                   int index=abs(nums[i])-1;
                    nums[index]=-nums[index];
                    if(nums[index]>0)
                    {
                            v.push_back(index+1);
                    }
            }
           
            return v;
        
    }
};