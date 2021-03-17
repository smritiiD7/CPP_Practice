class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            unordered_set<int> v1;
            v1.insert(nums.begin(),nums.end());
            if(v1.size()!=nums.size())
                    return true;
            return false;
        
    }
};