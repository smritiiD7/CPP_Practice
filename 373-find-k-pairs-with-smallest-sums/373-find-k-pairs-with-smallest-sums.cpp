class Solution {
public:
vector<vector<int>> kSmallestPairs(vector<int>& a1, vector<int>& a2, int k) {
   vector<vector<int>>ans;int cnt=0;
   priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> p;
      if(a1.size()>=1000){// If size of array is greater than 1000 then we simply bruteforce on k by  running 2 for loops from 0 to k and we maintain a min heap (priority queue) of pair of pairs to store sums of pair of elements of both the array
          for(int j=0;j<=k;j++){
             for(int i=0;i<=k;i++){
                p.push(make_pair(a1[j]+a2[i],make_pair(a1[j],a2[i])));
             }
          }
      }else{//Else we just simply brute force on size of array 
          for(int i=0;i<a1.size();i++){
              for(int j=0;j<a2.size();j++){
                  p.push(make_pair(a1[i]+a2[j],make_pair(a1[i],a2[j])));
               }
              }
            }
        while(cnt<k&&p.size()>0){// this & condition handles the case when k is greater than  product of size of the both arrays and also we take out the first k minimum sums of pairs and store them in the final 2d vector
          vector<int> v;
          v.push_back(p.top().second.first);
          v.push_back(p.top().second.second);
          ans.push_back(v);
          p.pop();cnt++;
        }
        return ans;
    }
};
