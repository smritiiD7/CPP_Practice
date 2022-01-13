class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,int>> pq;
            string ans;
        for(char ch : s)
        {
            mp[ch]++;
        }
        for(auto i : mp)
        {
            pq.push({i.second,i.first});
        }
        pair<int,int> top1,top2;
        while(!pq.empty())
        {
           top1=pq.top();
            pq.pop();
           ans+=top1.second;
          if(!pq.empty())
          {
              ans+=pq.top().second;
              top2=pq.top();
              pq.pop();
             
              if(top2.first>1) pq.push({top2.first-1,top2.second});
          }
            if(top1.first>1) pq.push({top1.first-1,top1.second});
        }
        for(int i=1;i<ans.length();i++)
        {
            if(ans[i-1]==ans[i]) return "";
        }
        return ans;
    }
};