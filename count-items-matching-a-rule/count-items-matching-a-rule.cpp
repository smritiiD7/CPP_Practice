class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
            int i,j,cnt=0;
            for(i=0;i<items.size();i++)
            {
                   // for(j=0;j<items[i].size();j++)
                    
                            if(ruleKey=="color")
                            {
                                    if(items[i][1]==ruleValue)
                                    {
                                            cnt++;
                                    }
                            }
                           else  if(ruleKey=="type")
                            {
                                    if(items[i][0]==ruleValue)
                                    {
                                            cnt++;
                                    }
                            }
                           else  if(ruleKey=="name")
                            {
                                    if(items[i][2]==ruleValue)
                                    {
                                            cnt++;
                                    }
                            }
                            
                    
            }
            return cnt;
        
    }
};