class Solution {
public:
    int countElements(vector<int>& nums) {
        int ans=0;
       int max=*max_element(nums.begin(),nums.end());
       int min=*min_element(nums.begin(),nums.end());
        for(int i:nums)
        {
            if(min<i && i< max)
                ans++;
        }
        return ans;
        
    }
};