class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=0;
        double sum=0;
        int i,size=arr.size();
        for(i=size/20;i<size-size/20;i++)
        {
            sum+=arr[i];
            cnt++;
        }
        return (double)sum/cnt;
    }
};