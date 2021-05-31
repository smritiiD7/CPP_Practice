class Solution {
public:
    bool isPalindrome(int x) {
        int rev_num=0;
        int n=x;
        if(n<0||n%10==0&&n!=0)
            return false;
        while (n>rev_num)
    {
        rev_num =rev_num*10+ n%10;
        n = n/10;
    }
       return n==rev_num||n==rev_num/10;
        
    }
};