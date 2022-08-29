class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
       sort(strs.begin(),strs.end());
       if(strs.size()==1) return strs[0];
        int k = strs.size()-1;
        for(int i =0;i<strs[0].size();i++)
        {
            if(strs[0][i]==strs[k][i])
                ans+=strs[0][i];
            else break;
        }
        
        return ans;
        
    }
};