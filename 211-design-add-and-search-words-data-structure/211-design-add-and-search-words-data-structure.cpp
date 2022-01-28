class WordDictionary {
    private:
    unordered_map<int,vector<string>> words;
    bool isequal(string word1,string word2)
    {
        for(int i=0;i<word1.size();i++)
        {
            if(word1[i]=='.' or word2[i]=='.')
                continue;
            if(word1[i]!=word2[i])
                return false;
        }
        return true;
    }
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        words[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto i: words[word.size()])
            if(isequal(i,word))
                return true;
        return false;
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */