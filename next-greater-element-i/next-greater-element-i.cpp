class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int> mp;
        stack<int> s;
        vector<int> v;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                mp[nums2[i]]=-1;
            }
            else if(s.size()>0&&s.top()>nums2[i])
            {
                mp[nums2[i]]=s.top();
            }
            else if(s.size()>0 && s.top()<=nums2[i])
            {
                while(s.size()>0 && s.top()<=nums2[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    mp[nums2[i]]=-1;
                }
                else
                {
                    mp[nums2[i]]=s.top();
                }
            }
            s.push(nums2[i]);
        }
        for(int k: nums1)
        {
            v.push_back(mp[k]);
        }
        return v;
    }
};