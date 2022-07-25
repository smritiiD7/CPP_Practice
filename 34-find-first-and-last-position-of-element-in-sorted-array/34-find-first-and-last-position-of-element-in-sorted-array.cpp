class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftPosition=-1,rightPosition=-1;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i] == target) 
          {
              leftPosition = i;
              break;
          }
      }
        
     for(int i=nums.size()-1;i>=0;i--)
     {
         if(nums[i] == target)
         {
             rightPosition = i;
             break;
         }
     }
        
        return {leftPosition, rightPosition};
    }
};