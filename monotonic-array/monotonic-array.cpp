class Solution {
public:
    bool isMonotonic(vector<int>& A) {
            int i;
            bool in=true,dec=true;
            for(i=0;i<A.size()-1;i++)
            {
                    if(A[i]>A[i+1])
                           in=false;
                    else if(A[i] < A[i+1])
                            dec=false;
            }
             return in||dec;
        
    }
};