class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int ans =0;
       
        for(int i=0;i< sentences.size();i++)
        {
             int len=0;
            for(int k=0; k<sentences[i].size();k++)
            {
                if(sentences[i][k] == ' ')
                    len++;
            }
             ans = max(len+1, ans);
        }
        return ans;
    }
};