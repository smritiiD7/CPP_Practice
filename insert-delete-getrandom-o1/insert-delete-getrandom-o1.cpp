class RandomizedSet {
public:
    vector<int> ans;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        auto i = find(ans.begin(), ans.end(), val);
        if(i != ans.end())
            return false;
        
        ans.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        auto i = find(ans.begin(), ans.end(), val);
        if(i == ans.end())
            return false;
        ans.erase(i);
        return true;
    }
    
    int getRandom() {
        int i = rand()%ans.size();
        return ans[i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */