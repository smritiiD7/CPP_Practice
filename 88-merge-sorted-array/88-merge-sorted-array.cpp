class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int fai= m-1;
       int sai= n-1;
       int insertAt=m+n-1;
       
        while(fai >=0 && sai >=0)
        {
            if(nums1[fai] >= nums2[sai])
            {
                nums1[insertAt]= nums1[fai];
                insertAt--;
                fai--;
            }
            else
            {
                nums1[insertAt]= nums2[sai];
                insertAt--;
                sai--;
            }
        }
        while(fai>=0)
        {
            nums1[insertAt--] = nums1[fai--];
        }
        
        while(sai>=0)
        {
            nums1[insertAt--] = nums2[sai--];
        }
    }
};