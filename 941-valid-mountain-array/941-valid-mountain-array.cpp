class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
         int i=0,l=arr.size();
        while(i+1<l&&arr[i]<arr[i+1])
            i++;
        if(i==0||i==l-1)
            return false;
        while(i+1<l&&arr[i]>arr[i+1])
            i++;
        return i==l-1;
    }
};