class Solution {
public:
    int numberOfMatches(int n) {
        int matches,team,ans;
        while(team!=1){
        if(n%2==0)
        {
            matches=n/2;
            team=n/2;
            ans+=matches;
            n= team;
           
            }
        else if(n%2==1)
        {
            matches=(n-1)/2;
            team=(n-1)/2 +1;
            ans+=matches;
            n=team;
          
            }
        }
        
        
        
        return ans;
        
    }
};