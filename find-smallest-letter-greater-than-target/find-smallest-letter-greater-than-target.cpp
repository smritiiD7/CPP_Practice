class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        for(char ch : letters)
        {
            if(ch>target)
            {
               return ch;
            }
                
        }
        return letters[0];
    }
};