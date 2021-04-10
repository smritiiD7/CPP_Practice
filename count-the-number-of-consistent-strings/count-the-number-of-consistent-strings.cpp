class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
            bool alpha[26]={};
            int res=words.size();
            for(char c: allowed) alpha[c-'a']=true;
            for(string word: words)
            {
                    for(char k:word)
                    {
                            if(!alpha[k-'a'])
                            {
                                    res--;
                                    break;
                            }
                    }
            }
            return res;
        
    }
};