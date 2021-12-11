class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> v , temp = nums;
        sort(nums.begin() , nums.end(), greater<int>());
        unordered_map<int,int> map;
        
for(int index = 0 ; index < k ; index ++) map[nums[ index]]++; 
        for(auto it: temp) if(map[it]-- > 0)v.push_back(it);
    return v;
    }
};