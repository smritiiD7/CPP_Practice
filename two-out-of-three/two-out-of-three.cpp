class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,set<int>> st;
        vector<int> ans;
        for(int i: nums1)
            st[i].insert(1);
        for(int i: nums2)
            st[i].insert(2);
        for(int i: nums3)
            st[i].insert(3);
        for(auto i : st)
        {
            if(i.second.size()>=2)
                ans.push_back(i.first);
        }
        return ans;
        
    }
};