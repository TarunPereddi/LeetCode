class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    int reverse(int x) {
        long ans = 0;
        while (x){
            ans = ans*10+x%10;          
            x /= 10;
        }
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }        
        return ans;
    }
};