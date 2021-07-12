class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        for(string i: strs)
        {
            string k=i;
            sort(k.begin(),k.end());
            m[k].push_back(i);
        }
        for(auto j: m)
        {
            ans.push_back(j.second);
        }
        return ans;
    }
};