class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        for(int i = n-k;i<n;i++)
        {
            sum+=cardPoints[i];
        }
        int s=0;
        for(int i=0,s=sum;i<k;i++)
        {
            s-=cardPoints[n-k+i];
            s+=cardPoints[i];
            sum=max(s,sum);
        }
        return sum;
    }
};