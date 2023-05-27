class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    int addDigits(int num) {
        return (num - 1) % 9 + 1;;
    }
};