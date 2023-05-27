class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int ans =0;
        int curr, temp;
        while(i<nums.size()){
            curr = nums[i];
            temp = i + 1 < nums.size() ? nums[i+1]: 0;
            if(temp && curr != temp){
                ans = curr;
                return ans;
            }
            i = i + 2;
        }
    return nums.back();
    }
};