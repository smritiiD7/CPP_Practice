class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
         int newLen=m+n;
        vector<int> v;
        int i=0,j=0;
        while(i<n&&j<m)
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
                    
            }
        }
        while(i<n)
        {
            v.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            v.push_back(nums2[j]);
            j++;
        }
       
        int mid=newLen/2;
        if(newLen%2==0)
        {
            double ans=(v[mid-1]+v[mid])/2.0;
            return ans;
        }
        return (double)v[mid];
    }
};