class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> mp;
        if(num=="0") return false;
       // int n = stoi(num);
        for(int i =0;i< num.length();i++)
        {
            mp[num[i]-'0']++;
        }
        
        for(int i= 0;i<num.length();i++)
        {
           // int k = stoi(num[i]);
            if(mp[i]!=num[i]-'0')return false;
        }
        return true;
    }
};