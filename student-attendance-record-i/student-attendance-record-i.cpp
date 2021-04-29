class Solution {
public:
    bool checkRecord(string s) {
        int i,absent=0;
        
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                absent++;
            if(absent>1)
                return false;
            if(s[i]=='L'&&i<s.length()-2&&s[i+1]=='L'&&s[i+2]=='L')
                return false;
        }
        return true;
    }
};