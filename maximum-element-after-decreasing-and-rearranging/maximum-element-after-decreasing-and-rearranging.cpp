class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i;
        arr[0]=1;
        for(i=1;i<arr.size();i++)
        {
            if(abs(arr[i-1]-arr[i])>1)
            {
                arr[i]=arr[i-1]+1;
            }
        }
        int ans=arr[i-1];
        return ans;
    }
};