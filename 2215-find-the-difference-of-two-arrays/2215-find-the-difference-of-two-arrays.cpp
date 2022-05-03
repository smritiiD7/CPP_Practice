class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
     set<int> s1;
     set<int> s2;
     vector<int> t1;
     vector<int> t2;
     vector<vector<int>> ans;
        
     for(int i : nums2) s1.insert(i);
     for(int i : nums1) s2.insert(i);
     for(int i: s2)
     {
         if(s1.find(i)==s1.end())
             t1.push_back(i);
     }
        ans.push_back(t1);
    for(int i: s1)
     {
         if(s2.find(i)==s2.end())
             t2.push_back(i);
     }
        ans.push_back(t2);
        return ans;
    }
};