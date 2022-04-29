class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> pos,neg;
        vector<int> ans;
        for(int i: nums)
        {
            if(i<0)
            {
                neg.push_back(i);
            }
            else
                pos.push_back(i);
        }
       // reverse(pos.begin(),pos.end());
       // reverse(neg.begin(),neg.end());
        int i=0,j=0;
        while(i<pos.size() && j<neg.size())
        {
            ans.push_back(pos[i++]);
           // pos.pop();
            ans.push_back(neg[j++]);
          //  neg.pop();
        }
        return ans;
    }
};