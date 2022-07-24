class Solution {
public:
    char repeatedCharacter(string s) {
      set<char> s1;
      for(char i : s)
      {
          if(s1.find(i)!=s1.end())
              return i;
          else
              s1.insert(i);
      }
        return 'a';
    }
};