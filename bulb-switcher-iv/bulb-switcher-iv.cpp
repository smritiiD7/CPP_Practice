class Solution {
public:
    int minFlips(string target) {
        int numberofflips=0;
        int status='0';
        int n=target.length();
        for(int i=0;i<n;i++)
        {
            if(status!=target[i])
            {
                numberofflips++;
                status=status=='0'?'1':'0';
            }
        }
        return numberofflips;
        
    }
};