class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    int addDigits(int num) {
        if(num<10) return num;
        if(num%9 == 0) return 9;
    return num%9;
    }
};