class NumArray {
public:
    int sum=0;
    vector<int> nums1;
    NumArray(vector<int>& nums) {
        nums1=nums;
        for(int i : nums)
        {
            sum+=i;
        }
    }
    
    int sumRange(int left, int right) {
        int res = sum;
      for(int i=0;i<left;i++)
      {
          res-=nums1[i];
      }
      for(int i= right+1;i<nums1.size();i++)
      {
          res-=nums1[i];
      }
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */