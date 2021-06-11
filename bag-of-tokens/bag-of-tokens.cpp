class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int power) {
        sort(token.begin(),token.end());
        int i=0,j=token.size()-1,score=0;
        while(i<=j)
        {
            if(power>=token[i])
            {
                score++;
                power-=token[i];
                i++;
            }
            else if(score>0&&i<j)
            {
                power+=token[j];
                score--;
                j--;
            }
            else
                break;
        }
        
        return score;
    }
};