class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int i,mini,even=0,odd=0;
        for(i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
                even++;
            else
                odd++;
        }
        mini=min(even,odd);
        return mini;
        
    }
};