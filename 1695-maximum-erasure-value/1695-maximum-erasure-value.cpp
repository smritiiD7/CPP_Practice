class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       int i=0,j = 0, n = nums.size();
       set<int> set1;
        int sum=0,ans=INT_MIN;
       while(i<n && j<n)
       {
          if(set1.find(nums[j])==set1.end())
          {
                set1.insert(nums[j]);
              sum+=nums[j++];
            
        
              ans=max(ans,sum);
          }
           else
           {
               sum-=nums[i];
               set1.erase(nums[i++]);
               
           }
       }
        return ans;
    }
};