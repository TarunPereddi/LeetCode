class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int length = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;
        cout<<sum<<" "<<ans<<"\n";
        for (int i = 0; i < length; i++){
            sum -= nums[i];
            if(sum==ans){
                return i;
            }else ans += nums[i];
            
        }
        return -1;
    }
};