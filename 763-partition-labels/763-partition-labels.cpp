class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v;
        unordered_map<char,int> mp;
       for(int i=0;i<s.length();i++)
       {
           mp[s[i]]=i;
       }
       int maxIndex=0,firstIndex=0;
        for(int i=0;i<s.length();i++)
        {
           maxIndex=max(mp[s[i]],maxIndex);
            if(i==maxIndex){
                v.push_back(maxIndex-firstIndex+1);
            firstIndex=i+1;
            }
        }
        return v;
    }
};