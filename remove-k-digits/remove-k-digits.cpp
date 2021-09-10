class Solution {
public:
    string removeKdigits(string num, int k) {
      string ans="";
        for(char i: num)
        {
            while(ans.size()&&ans.back()>i &&k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size()||i!='0')ans.push_back(i);
        }
        while(ans.size()&&k--)
            ans.pop_back();
       return (ans=="")?"0":ans;
    }
};