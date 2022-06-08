class Solution {
public:
    int removePalindromeSub(string s) {
        string reversedString =s;
        reverse(reversedString.begin(),reversedString.end());
        return s == reversedString ? 1:2;
    }
};