class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,cnt=0,maxi=0;
      while(i<nums.size())
        {
         
            if(nums[i]==0)
            {
               cnt=0;
                i++;
            }
          else{
              cnt++;
              maxi=max(maxi,cnt);
              i++;
          }
        }
        return maxi;
        
    }
};