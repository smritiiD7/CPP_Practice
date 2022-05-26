class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       unordered_map<char, vector<int>> mp;
        int maxi=-1;
        for(int i=0;i<s.length();i++){
            mp[s[i]].push_back(i);
        }
        
        for(auto i : mp)
        {
           vector<int> temp = i.second;
            //for(int j : temp) cout<< j;
            if(temp.size()>1)
            {
                int diff = temp[temp.size()-1] - temp[0]-1;
                maxi = max(maxi,diff);
            }
        } 
        return maxi;
    }
};