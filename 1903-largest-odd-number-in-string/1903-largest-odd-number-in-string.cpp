class Solution {
public:
    string largestOddNumber(string num) {
        int end;
        for(int i = num.size()-1;i>=0;i--)
        {
            if(num[i]%2==1)
            {
                end = i;
                break;
            }
        }
        
        string ans = num.substr(0,end+1);
        return ans;
    }
};