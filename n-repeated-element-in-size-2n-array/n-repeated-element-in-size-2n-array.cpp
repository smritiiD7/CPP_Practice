class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n=A.size()/2;
        unordered_map<int,int> mp;
        int ans;
       for(int i=0;i<A.size();i++)
       {
           mp[A[i]]++;
       }
        for(auto j: mp)
        {
            if(j.second==n)
            {
             ans= j.first;
            }
        }
        return ans;
        
        
    }
};