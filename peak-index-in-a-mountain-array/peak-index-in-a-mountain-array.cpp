class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-2,mid;
        while(h>l)
        {
            mid=l+(h-l)/2;
            if(arr[mid]<arr[mid+1])
            {
                l=mid+1;
            }
            else
                h=mid;
        }
        return l;
        
    }
};