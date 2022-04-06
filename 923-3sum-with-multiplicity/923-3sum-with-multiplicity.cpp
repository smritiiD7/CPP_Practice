  
class Solution {
    
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        long long mod = 1e9 + 7;
        int n = arr.size();
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                int requiredNum = target-arr[i]-arr[j];
                
                cnt+=mp[requiredNum];
            }
            cnt=cnt%mod;
            mp[arr[i]]++;
        }
        return cnt%mod;
    }
};