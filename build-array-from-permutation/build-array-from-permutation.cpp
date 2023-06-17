class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> temp;
        temp = nums;
        int i = 0;
        while(i<nums.size()){
            nums[i]=temp[temp[i]];
            i++;
        }
        return nums;
    }
};