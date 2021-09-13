class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++)
        {
            if(r[i]-l[i]<2)
                ans.push_back(true);
            else{
                bool flag=true;
            vector<int> v(nums.begin()+l[i],nums.begin()+r[i]+1);
        sort(v.begin(),v.end());
            int diff=v[1]-v[0];
            for(int j=2;j<=r[i]-l[i];j++)
            {
                if(v[j]-v[j-1]!=diff)
                {
                    flag=false;
                    break;
                }
            }
            ans.push_back(flag);
            }
        }
        return ans;
    }
};