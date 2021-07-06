class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        bool entry=true;
        int i=0;
        vector<int> ans (deck.size(),0);
        while(i<deck.size())
        {
            for(int j=0;j<ans.size();j++)
                if(ans[j]==0){
                if(entry)
                {
                    ans[j]=deck[i++];
                    entry=false;
                }
                else
                    entry=true;
                }
            }
            
        return ans;
        
        
    }
};