class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int i,j,cnt=0,r,c;
        vector<vector<int>> v1;
        for(i=0;i<s.size();i++)
        {
           char ch=s[i];
            j=i+1;
            while(j<s.size()&&s[j]==ch)
                j++;
            if(j-i>=3)
                v1.push_back({i,j-1});
            i=j-1;
        }
        return v1;
        
    }
};