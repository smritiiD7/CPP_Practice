class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
            int i,j;
            string sum1,sum2;
            for(i=0;i<word1.size();i++)
            {
                    sum1+=word1[i];
            }
            for(j=0;j<word2.size();j++)
            {
                    sum2+=word2[j];
            }
            if(sum1==sum2)
                    return true;
             return false;
        
    }
};