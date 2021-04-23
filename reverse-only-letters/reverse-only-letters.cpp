class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,j=s.length()-1,temp;
        while(i<=j)
        {
            if(s[i]>=33&&s[i]<=64||s[i]>=91&&s[i]<=96)
            {
                i++;
            }
          else if(s[j]>=33&&s[j]<=64||s[j]>=91&&s[j]<=96)
            {
                j--;
            }
            else
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};