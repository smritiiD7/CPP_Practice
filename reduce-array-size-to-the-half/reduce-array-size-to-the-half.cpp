class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int i,cnt=0;
        unordered_map<int,int> mp;
        vector<int> v;
        for(i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto k: mp)
        {
          v.push_back(k.second);  
        }
        sort(v.begin(),v.end(),greater<int>());
        int n=arr.size();
        int half=arr.size()/2;
        for(i=0;i<v.size();i++)
        {
            n=n-v[i];
            cnt++;
            if(n<=arr.size()/2)
                break;
        }
        
        return cnt;
    }
};