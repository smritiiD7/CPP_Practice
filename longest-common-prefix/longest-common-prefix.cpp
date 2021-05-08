class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string v;
        int i,k=strs.size();
        sort(strs.begin(),strs.end());
        int length=strs[0].size();
        for(i=0;i<length;i++)
        {
            if(strs[0][i]==strs[k-1][i])
            {
                v+=strs[0][i];
            }
            else 
                break;
            
        }
        return v;
    }
};