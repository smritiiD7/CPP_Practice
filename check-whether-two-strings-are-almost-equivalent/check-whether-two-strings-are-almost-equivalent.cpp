class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
      // int ch[26]={};
        vector<int> ch(26,0);
        for(char k : word1) ch[k-'a']++;
        for(char k : word2) ch[k-'a']--;
        for(int i=0;i<26;i++){
            if(abs(ch[i])>3)
                return false;
        }
        return true;
        
    }
};