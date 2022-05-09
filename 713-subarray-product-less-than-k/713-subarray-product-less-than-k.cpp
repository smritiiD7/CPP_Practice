class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //brute force
       /* int ans=0;
        for(int i=0;i<nums.size();i++)
        {
             int pro=nums[i];
            if(nums[i]<k) ans++;
            for(int j=i+1;j<nums.size();j++)
            {
                if(pro*nums[j]<k){
                    ans++;
                    pro=pro*nums[j];
                    }
                else
                    br;
            }
        }
        return ans; */
         if(k == 0 || k == 1)
            return 0;
        int ans=0;
        int j=0;
        int pro = 1;
        for(int i=0;i<nums.size();i++)
        {
            pro*=nums[i];
            
            while( pro>=k){ 
                pro = pro/nums[j];
                j++; 
            }
            ans+=(i-j)+1;
        }
        return ans;
        
    }
};