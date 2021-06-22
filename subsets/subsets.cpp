class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int l=nums.size();
        int subsets=pow(2,l);
        int i,j;
            vector<vector<int>> v;
      
        for(i=0;i<subsets;i++)
        {
              vector<int> temp;
            for(j=0;j<l;j++)
            {
                if((i&(1<<j))!=0)
                {
                    temp.push_back(nums[j]);
                }
            }
        v.push_back(temp);
        }
        return v;
    }
};