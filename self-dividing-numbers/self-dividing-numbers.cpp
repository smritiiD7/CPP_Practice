class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int i;
        vector<int> ans;
        for(i=left;i<=right;i++)
        {
            int temp=i;
            while(temp>0)
            {
                int k=temp%10;
                if(k==0||i%k!=0)
                    break;
                temp=temp/10; 
            }
            if(temp==0)
                ans.push_back(i);
        }
        return ans;
    }
};