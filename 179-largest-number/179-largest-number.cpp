class Solution {
public:
   static bool cmp(string &s1,string &s2)
    {
        return s1+s2>s2+s1;
    }
    string largestNumber(vector<int>& nums) {
       vector<string> s;
        string ans="";
        for(int i : nums)
        {
            string k = to_string(i);
            s.push_back(k);
        }
        sort(s.begin(),s.end(),cmp);
        for(string i : s)
        {
            ans+=i;
        }
      return ans[0]=='0' ? "0" : ans;
    }
};