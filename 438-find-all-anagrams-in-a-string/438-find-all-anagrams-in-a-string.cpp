class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int p_size=p.length();
        int s_size=s.length();
        if(s.length()<p.length()) return {};
        vector<int> ans;
      vector<int> freq_p(26,0);
      vector<int> window(26,0);
        for(int i=0;i<p.size();i++)
        {
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(freq_p == window) ans.push_back(0);
        for(int i=p_size;i<s_size;i++)
        {
            window[s[i-p_size]-'a']--;
            window[s[i]-'a']++;
            
            if(freq_p == window) ans.push_back(i-p_size+1);
            
        }
        return ans;
    }
};