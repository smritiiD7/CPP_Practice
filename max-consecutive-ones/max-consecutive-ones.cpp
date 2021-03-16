class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
            int i,maxi=0,cnt=0,j;
            for(i=0;i<nums.size();i++)
            {
                    if(nums[i]==0)
                            cnt=0;
                    else{
                            cnt++;
                            maxi=max(cnt,maxi);
            }
            }
            return maxi;
            
        
    }
};