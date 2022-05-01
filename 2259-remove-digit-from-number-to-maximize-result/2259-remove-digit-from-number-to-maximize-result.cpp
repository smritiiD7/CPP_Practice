class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans="";
        int num;
        string finalString="";
        set<int> s;
          for(int i=0;i<number.size();i++)
        {
            if(number[i] == digit)
                s.insert(i);
        }
        
        for(int i=0;i<number.size();i++)
        {
            string newString="";
            if(s.find(i)!=s.end())
            {
                if(i>0)
                newString+=number.substr(0,i);
                if(i<number.length()-1)
                newString+=number.substr(i+1,number.length());
                
               // num=stoi(newString);
               ans = max(newString,ans);
                //finalString= to_string(ans);
                
            }
        }
        return ans;
    }
};