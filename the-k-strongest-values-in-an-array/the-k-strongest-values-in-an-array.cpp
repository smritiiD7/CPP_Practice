class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int left=0,right=arr.size()-1;
        int mid=(n-1)/2;
        int m=arr[mid];
        int count=0;
        vector<int> v;
        while(count<k)
        {
            if(abs(arr[right]-m)>=abs(arr[left]-m))
            {
                v.push_back(arr[right]);
                count++;
                right--;
            }
            else if(abs(arr[right]-m)<abs(arr[left]-m))
            {
                v.push_back(arr[left]);
                count++;
                left++;
            }
        }
        return v;
    }
};