class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n == 1) return -1;
        int leftsum=0;
        int rightsum=0;
        for(int i=1;i<n;i++)
        {
            rightsum+=nums[i];
        }
        if(leftsum == rightsum) return 0;
        
        for(int i=1;i<n;i++)
        {
          leftsum+=nums[i-1];
          rightsum-=nums[i];
          if(leftsum == rightsum) return i;
        }
        return -1;
    }
};