class Solution {
public:
     class compare{
        public:
        bool operator()(const string &a,const string &b){
            if(a.length()==b.length())
                return a>b;
            return a.length()>b.length();
        }
     };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,compare> pq;
        for(string s : nums)
        {
           // int n = stoi(s);
            pq.push(s);
            if(pq.size()>k)
                pq.pop();
        }
       // int ans = pq.top();
        //string a = to_string(ans);
        return pq.top();
        
    }
};