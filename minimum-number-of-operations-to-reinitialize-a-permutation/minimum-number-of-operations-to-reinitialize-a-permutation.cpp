class Solution {
public:
    int reinitializePermutation(int n) {
            vector<int> perm;
           
            int i,cnt=0;
            for(i=0;i<n;i++)
            {
                    perm.push_back(i);
            }
             vector<int> original=perm;
            vector<int> temp(n,0);
            while(temp!=original)
            {
                    for (int i = 0; i < n; i++)
                temp[i] = (i % 2 == 0) ? perm[i / 2] :perm[n / 2 + (i - 1) / 2];
                    perm=temp;
                    cnt++;
            }
        return cnt;
    }
};