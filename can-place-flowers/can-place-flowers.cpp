class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i]==1) i++;
            else if(flowerbed[i]==0 & i != flowerbed.size()-1){
                if(flowerbed[i+1]!=1){
                    n--;
                    i++;
                }
            }
            else if(flowerbed[i]==0 & i == flowerbed.size()-1){
                n--;
            }
        }
        if(n<0)return true;
        return (!n);
    }
};