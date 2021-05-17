class Solution {
public:
    int minPartitions(string n) {
        int i,max=0;
        for(i=0;i<n.length();i++)
        {
            int num=n[i]-'0';
            if(num>=max)
                max=num;
        }
        return max;
        
    }
};