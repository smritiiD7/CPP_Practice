class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      vector<int> v;
        v.push_back(0);
        int i,maxi=0,j=0;
        for(i=0;i<gain.size();i++)
        {
            int put=v[j]+gain[i];
            maxi=max(maxi,put);
            v.push_back(put);
            j++;
        }
        return maxi;
    }
};