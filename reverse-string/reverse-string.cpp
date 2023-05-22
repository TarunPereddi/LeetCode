class Solution {
public:
    void reverseString(vector<char>& s) {
        int lastIndex = s.size()-1;
        char temp = ' ';
        for( int i = 0; i < s.size()/2 ; i++){
            temp = s[i];
            s[i] = s[lastIndex];
            s[lastIndex] = temp;
            temp = ' ';
            lastIndex--;
        }
    }
};