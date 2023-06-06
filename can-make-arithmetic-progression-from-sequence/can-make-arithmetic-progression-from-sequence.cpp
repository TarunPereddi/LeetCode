class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int progression = arr[1] - arr[0];
        for(int i = 1; i < arr.size()-1; i++){
            if(arr[i]+progression != arr[i+1]){
                return false;
            }
        }
        return true;
    }
};