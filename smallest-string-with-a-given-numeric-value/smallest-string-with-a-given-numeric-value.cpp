class Solution {
public:
    string getSmallestString(int n, int k) {
        string str(n,'a');
        k-=n;
        int i=n-1;
        while(k>0)
        {
            int temp=min(k,25);
            str[i--]+=temp;
                k-=temp;
        }
        return str;
    }
};