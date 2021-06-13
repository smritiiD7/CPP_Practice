class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int i, sum1=0,sum2=0,sum3=0;
        for(i=0;i<firstWord.length();i++)
        {
            sum1=sum1*10+firstWord[i]-'a';
        }
        for(i=0;i<secondWord.length();i++)
        {
            sum2=sum2*10+secondWord[i]-'a';
        }
        for(i=0;i<targetWord.length();i++)
        {
            sum3=sum3*10+targetWord[i]-'a';
        }
        if(sum1+sum2==sum3)
            return true;
        return false;
    }
};