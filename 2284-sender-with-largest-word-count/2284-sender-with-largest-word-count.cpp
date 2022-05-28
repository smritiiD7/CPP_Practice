class Solution {
public:
     int countWords(string &str)
     {
         stringstream ss(str);
         string word;
         int cnt=0;
         while(ss>>word)
         {
             cnt++;
         }
         return cnt;
     }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
      
        map<string,int> mp;
        int maxi=INT_MIN;
        string ans="";
        for(int i=0;i< messages.size();i++)
        {
            int extra=0;
            if(mp[senders[i]]){
                extra = mp[senders[i]];
            }
            int cnt = countWords(messages[i]);
            mp[senders[i]] = cnt+extra;
        }
        
        for(auto i : mp)
        {
           // maxi = max(i.second,maxi);
            if(i.second>=maxi)
            {
                ans=i.first;
                maxi=i.second;
            }
            /*else if(i.second == maxi)
            {
                ans = max(ans,i.first);
            } */
        }
        return ans;
        
    }
};