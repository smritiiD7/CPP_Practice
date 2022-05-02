class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]%2!=0 && nums[j]%2==0) //odd-even
            {
                swap(nums[i],nums[j]);
                j--;i++;
            }
            else if(nums[i]%2!=0 && nums[j]%2!=0) //odd-odd
                j--;
            else if(nums[i]%2 ==0 && nums[j]%2==0) //even-even
                i++;
            else
            {
                i++;j--;
            }
        }
        return nums;
    
    }
};