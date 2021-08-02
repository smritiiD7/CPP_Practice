class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> s;
        string ans="";
        int i;
        for(i=0;i<paths.size();i++)
        {
            s.insert(paths[i][0]);
        }
        for(i=0;i<paths.size();i++)
        {
            if(s.find(paths[i][1])==s.end())
            {
                ans=paths[i][1];
                break;
            }
        }
        return ans;
    }
};