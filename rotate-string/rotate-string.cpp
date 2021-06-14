class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
            return true;
        int i,d=s.length(),j;
        for(i=0;i<d;i++)
        {
           j=0;
           int temp= s[0];
            while(j<s.length()-1)
            {
                s[j]=s[j+1];
                j++;
            }
            s[j]=temp;
            if(s==goal)
                return true;
            
        }
        return false;
    }
};