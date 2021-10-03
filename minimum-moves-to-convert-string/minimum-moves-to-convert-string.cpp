class Solution {
public:
    int minimumMoves(string s) {
        int i=0,n=s.length(),cnt=0;
        while(i<n)
        {
            if(s[i]=='O')
                i++;
            else
            {
                i+=3;
                cnt++;
            }
                
        }
        return cnt;
    }
};