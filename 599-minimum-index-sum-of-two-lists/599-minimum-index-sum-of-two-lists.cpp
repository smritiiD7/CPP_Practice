class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       unordered_map<string,int> mp;
        int miniIndex=INT_MAX;
        vector<string> ans;
       for(int i=0;i<list2.size();i++)
       {
           mp[list2[i]]=i;
       }
        
        for(int i=0;i<list1.size();i++)
        {
            if(mp.find(list1[i])!=mp.end())
            {
                //miniIndex = min(miniIndex,mp[list1]+i);
                if(mp[list1[i]]+i<miniIndex)
                {
                    miniIndex=mp[list1[i]]+i;
                    ans.clear();
                    ans.push_back(list1[i]);
                }
                else if(mp[list1[i]]+i ==miniIndex)
                {
                    ans.push_back(list1[i]);
                }
            }
        }
        return ans;
    }
};