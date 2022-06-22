class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        bool flag = false;
        int len =0;
        for(auto i : s)
        {
            mp[i]++;
        }
    
        for(auto i : mp)
        {
            if(i.second%2==0)
                len+=i.second;
            if(i.second%2==1)
            {
                len+=i.second-1;
                flag = true;
            }       
        }
        if(flag == true)
        {
            len++;
        }
        return len;
    }
};