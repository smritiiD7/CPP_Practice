class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l = indices.size(),i;
        char arr[l];
        string s1;
        for(i=0;i<indices.size();i++)
        {
            arr[indices[i]]=s[i];
        }
        for(i=0;i<l;i++)
        {
            s1+=arr[i];
        }
        return  s1;
        
    }
};