class Solution {
public:
    string reverseVowels(string s) {
            int i=0,j=s.length();
            while(i<j)
            {
                    if(!isVowel(s[i]))
                    {
                            i++;
                            continue;
                    }
                    if(!isVowel(s[j]))
                    {
                            j--;
                            continue;
                    }
                    swap(s[i++],s[j--]);
            }
            return s;
        
    }
        bool isVowel(char ch)
        {
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='O'||ch=='I'||ch=='E'||ch=='U')
                {
                        return true;
                }
                return false;
        }
};