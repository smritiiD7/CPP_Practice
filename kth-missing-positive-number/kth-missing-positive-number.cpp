class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int expected=1;
        int i;
        for(i=0;i<arr.size();i++)
        {
                while(arr[i]!=expected)
                {
                    k--;
                    if(k==0)
                    {
                        return expected;
                    }
                    expected++;
                }
            expected++;
        }
        return arr[i-1]+k;
    }
};