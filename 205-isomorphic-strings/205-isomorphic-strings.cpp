class Solution {
public:
    string encodedString(string &str)
    {
        unordered_map<char,int> mp;
        int start=1;
        string code="";
        for(int i=0;i<str.length();i++){
        if(mp.find(str[i])==mp.end())
        {
          mp[str[i]] = start;
          code+=to_string(mp[str[i]]);
            start++;
        }
            else{
               code+=to_string(mp[str[i]]); 
            }  
      }
        mp.clear();
        return code;
        
    }
    
    
    
    bool isIsomorphic(string s, string t) {
       string one = encodedString(s);
       string two = encodedString(t);
       return one==two ? true : false;
    }
};