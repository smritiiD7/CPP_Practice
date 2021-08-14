class Solution {
public:
    bool canPlaceFlowers(vector<int>& fd, int n) {
        int i=0,cnt=0;
        while(i<fd.size())
        {
            if(fd[i]==0&&(i==0||fd[i-1]==0)&&(i==fd.size()-1||fd[i+1]==0))
            {
                fd[i]=1;
                n--;
            }
            i++;
        }
        return n<=0;
    }
};