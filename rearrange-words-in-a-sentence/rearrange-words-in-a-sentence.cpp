class Solution {
public:
    string arrangeWords(string text) {
        map<int,string> mp;
        int i;
        string res;
        for(i=0;i<text.size();i++)
        {
            string k="";
            while(isalpha(text[i]))
                  {
                      k+=tolower(text[i]);
                      i++;
                  }
                  mp[k.size()]+=k+" ";
        }
        
        for(auto i: mp)
        {
            res+=i.second;
        }
        res.pop_back();
        res[0]=toupper(res[0]);
        return res;
        
        
    }
};