class Solution {
public:
    int minLength(string s) {
        stack<char> ans;

        for (char c : s) {

            if (!ans.empty() && (ans.top() == 'A' && c == 'B' || ans.top() == 'C' && c == 'D')) {

                ans.pop();

            } else {

                ans.push(c);

            }

        }

        return ans.size();
    }
};