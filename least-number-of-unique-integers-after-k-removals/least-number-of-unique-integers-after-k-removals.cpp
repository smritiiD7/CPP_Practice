class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        vector<int> v;
        int i,sum=0;
        for(i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto k: mp)
        {
            v.push_back(k.second);
        }
        sort(v.begin(),v.end());
        for(int j=0;j<v.size();j++)
        {
            while(k>0&&v[j]>0)
            {
                v[j]--;
                k--;
            }
        }
        for(i=0;i<v.size();i++)
        {
          if(v[i]>0)
          {
              sum++;
          }
        }
        return sum;
        
    }
};