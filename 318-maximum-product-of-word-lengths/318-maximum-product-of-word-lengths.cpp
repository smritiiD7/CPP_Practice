class Solution {
public:
    bool noCompare(string &s1, string &s2)
    {
      for(char i : s1)
      {
          for(char j : s2)
          {
              if(i==j) return false;
          }
      }
        return true;
    }
    
    
    
    int maxProduct(vector<string>& words) {
        int maxLen=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
            if(words[i].length()*words[j].length()<=maxLen) continue;
                if(noCompare(words[i],words[j])==true)
                {
                    int pro = words[i].length()*words[j].length();
                maxLen=max(maxLen,pro);
                }
            }
        }
        return maxLen;
    }
};