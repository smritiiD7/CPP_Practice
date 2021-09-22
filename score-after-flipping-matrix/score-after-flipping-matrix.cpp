class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        for(int i = 0;i<A.size();i++) // FLIP THE ROW to 1 is most significant is 0
        {
            if(A[i][0] == 0)
                for(int j = 0;j<A[i].size();j++)
                A[i][j] = 1-A[i][j];
        }
        //IF THE COLUMN HAS MORE 0 THAN 1 THEN FLIP THE COLUMN
        for(int i = 0;i<A[0].size();i++)
        {   int zero = 0;
            int one = 0;
            for(int j = 0;j<A.size();j++)
            {
                if(A[j][i] == 0)
                    zero++;
                else
                    one++;
            }
         if(zero>one)
         {
             for(int j = 0;j<A.size();j++)
                 A[j][i] = 1-A[j][i];
         }
        }
        //count the data value
        int n = A.size();
        int m = A[0].size();
        int value = 0;
        for(int i=0;i<n;i++){
            int power=0;
            for(int j=m-1;j>=0;j--){
                value += A[i][j]*pow(2,power);
                power++;
            }
        }
        return value;
    }
};
