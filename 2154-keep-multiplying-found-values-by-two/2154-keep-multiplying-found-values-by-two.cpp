class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for(int i : nums)
        {
            s.insert(i);
        }
        while(s.find(original)!=s.end())
        {
            original = original*2;
            if(s.find(original) == s.end())
                break;
        }
        return original;
    }
};