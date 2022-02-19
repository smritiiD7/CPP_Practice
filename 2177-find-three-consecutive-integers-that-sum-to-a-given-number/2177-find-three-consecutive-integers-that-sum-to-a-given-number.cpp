class Solution {
public:
    vector<long long> sumOfThree(long long num) {
      //  vector<long long> ans;
        if(num%3 !=0) return {};
       // float square = sqrt(num);
        //if((square*square) == num) return {};
        
       return {num/3 -1,num/3,num/3+1};
        
    }
};