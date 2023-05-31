class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    int reverse(int x) {
        long int ans = 0;
        auto temp = abs(x);
        while (temp>0){
            ans = ans*10;
            ans += temp%10;            
            temp /= 10;
        }
        if(ans>2147483647 ){
            return 0;
        }
        if(x<0){
            ans *= -1;
        }
        
        return ans;
    }
};