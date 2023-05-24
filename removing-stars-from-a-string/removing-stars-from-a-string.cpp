class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }

    string removeStars(string s) {
        stack<char> stack;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='*'){
                stack.pop();
            }
            else{
                stack.push(s[i]);
            }
        }
        string str = "";
        while(!stack.empty()){
            str += stack.top();
            stack.pop();
        }

        reverse(str.begin(), str.end());

        return str;
    }
};