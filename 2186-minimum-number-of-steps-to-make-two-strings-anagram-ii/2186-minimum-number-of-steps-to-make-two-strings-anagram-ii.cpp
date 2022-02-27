class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> hs,ht; //To store the frequency of each characters present in s and t string
        int ans=0;
        for(char i: s) //traversing in the string s
            hs[i]++;
        for(char i: t)
            ht[i]++;
       for(auto i: hs) //traversing in string t
       {
           ans+=abs(hs[i.first] - ht[i.first]); //finding the difference in the frequency of each character, that will be appended to make it an anagram
           hs[i.first]=0; 
           ht[i.first]=0;
          
       }
         for(auto i: ht)
       {
           ans+=abs(hs[i.first] - ht[i.first]);
       }
        return ans;
    }
};