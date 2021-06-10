class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i;
        for(i=num.size()-1;i>=0&&k!=0;i--)
        {
            k=num[i]+k;
            num[i]=k%10;
            k=k/10;
        }
        while(k)
        {
            num.insert(num.begin(),k%10);
            k=k/10;
        }
        return num;
        
    }
};