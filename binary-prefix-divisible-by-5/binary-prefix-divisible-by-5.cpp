class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
            vector<bool> v;
            int i,nums=0;
            for(i=0;i<A.size();i++)
            {
               nums=((nums*2)+A[i])%5;
                    if(nums==0)
                    {
                            v.push_back(true);
                    }
                    else
                            v.push_back(false);
            }
            return v;
        
    }
};