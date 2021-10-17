class Solution {
public:
    bool areNumbersAscending(string s) {
       int i;
        vector<int> v;
        for(i=0;i<s.length();i++)
        {
           if(isdigit(s[i])==true){
               string k="";
               while(isdigit(s[i])==true){
                  k+=s[i++];
               }
               int p =stoi(k);
            v.push_back(p)  ;
        }
        }
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
    }
};