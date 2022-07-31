class NumArray {
public:
    vector<int> nums1;
    int sum=0;
    NumArray(vector<int>& nums) {
      nums1 = nums;  
        for(int i : nums1)
        {
            sum+=i;
        }
    }
    
    void update(int index, int val) {
        sum-=nums1[index];
        sum+=val;
        nums1[index]=val;
        
    }
    
    int sumRange(int left, int right) {
        int res =sum;
       for(int i=0;i<left;i++)
           res-=nums1[i];
       for(int i=right+1;i<nums1.size();i++)
          res-=nums1[i];
           return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */