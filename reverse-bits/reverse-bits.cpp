class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    uint32_t reverseBits(uint32_t n) {
        auto x = bitset<32>(n);
        auto str = x.to_string();
        reverse(str.begin(), str.end());
        auto y = bitset<32>(str);
        
        return y.to_ulong();
    }
};