class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int maxcount=0,res=-1;
        for(auto i: mp)
        {
            if(maxcount<i.second)
            {
                maxcount=i.second;
                res=i.first;
            }
        }
        return res;
        
    }
};