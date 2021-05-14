class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s,s2;
        int i;
        for(i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }
        for(i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
            {
               s2.insert(nums2[i]);    
            }
        }
       vector<int> v(s2.begin(),s2.end());
        return v;
    }
};