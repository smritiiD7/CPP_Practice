class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1,temp;
            while(j>=i)
            {
                    if(nums[i]==val&&nums[j]!=val)
                    {
                            temp=nums[i];
                            nums[i]=nums[j];
                            nums[j]=temp;
                            i++;
                            j--;
                    }
                    if(nums[i]==val&&nums[j]==val)
                    {
                            j--;
                    }
                    if(nums[i]!=val)
                            ++i;
            }
           int l=i;
            
            
            return l;
    }
};