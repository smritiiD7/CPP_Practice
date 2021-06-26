class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int i,ts=0;
        for(i=shifts.size()-1;i>=0;i--)
        {
             ts = (ts + shifts[i]%26)%26;
             s[i] = (char)(((s[i] - 'a' + ts) % 26) + 'a');
        }
        return s;
    }
};