class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i,j;
        vector<int> v;
        unordered_map<int,int> m;
        for(i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(i=0;i<nums2.size();i++)
        {
            if(--m[nums2[i]]>=0)
            {
                v.push_back(nums2[i]);
               // nums2[i]--;
            }
        }
        return v;
    }
};