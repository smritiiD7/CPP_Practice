class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i,mini,diff;
        vector<int> v;
       /* if(nums.size()==1)
        {
            int k=abs(i-start);
            return k;
        }*/
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                v.push_back(i);
            }
        }
        mini=abs(v[0]-start);
        for(i=1;i<v.size();i++)
        {
            diff=abs(v[i]-start);
            mini=min(diff,mini);
        }
        return mini;
        
    }
};