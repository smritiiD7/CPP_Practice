class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0,l=arr.size(),sum=0,cnt=0;
        while(j<l)
        {
            sum+=arr[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(sum/k>=threshold)
                {
                    cnt++;
                }
                sum-=arr[i];
                j++,i++;
            }
        }
        return cnt;
        
    }
};