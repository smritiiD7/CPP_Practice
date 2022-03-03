class Solution {
public:
    string palindrome(string a)
    {
        int i=0,j=a.size()-1;
        while(i<j)
        {
            if(a[i]!=a[j])
                return "";
            i++;
            j--;
        }
        return a ;
    }
    string firstPalindrome(vector<string>& words) {
        string res="";
       for(int i=0;i<words.size();i++)
       {
          string res= palindrome(words[i]);
           if(res!="")
               return res;
       }
        return res;
    }
};