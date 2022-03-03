class Solution {
public:
    int mostWordsFound(vector<string>& str) {
       
        int ans=0;
        for(int i=0;i<str.size();i++){
            stringstream s(str[i]);
            string word;
          int count = 0;
         while (s >> word)
           count++;
            ans=max(count,ans);
        }
        
    return ans;;

    }
};