class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string s) {
            vector<char> ch;
           // vector<int> rem;
            int i;
            char lexo=s[0],ans;
            //rem.push_back(releaseTimes[0]);
            ch.push_back(s[0]);
            int TimeTaken,max=releaseTimes[0];
            for(i=1;i<releaseTimes.size();i++)
            {
                 TimeTaken = releaseTimes[i] - releaseTimes[i - 1];
                    if(TimeTaken>max){
                            max=TimeTaken;
                            ch.push_back(s[i]);
                            lexo=s[i];
                    }
                    if(TimeTaken==max)
                    {
                            max=TimeTaken;
                            if(s[i]>s[i-1])
                            {
                                    lexo=s[i];
                            }
                            
                    }
            }
            return lexo;
           
        
    }
};