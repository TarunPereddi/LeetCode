class Solution {
public:
    bool isPalindrome(string s) {
        auto it = remove_if(s.begin(), s.end(), [](char const &c) {
        return !isalnum(c);
    });
 
    s.erase(it, s.end());
    cout<<s;
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;

        }
        return true;
    }
};