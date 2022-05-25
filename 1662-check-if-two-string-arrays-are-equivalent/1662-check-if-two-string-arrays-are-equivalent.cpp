class Solution {
public:
    string concatenate(vector<string> &s)
    {
        string res="";
        for(string i : s)
        {
            res+=i;
        }
        return res;
    }
    
    
    
    
    
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        if(concatenate(word1)==concatenate(word2)) return true;
        return false;
    }
};