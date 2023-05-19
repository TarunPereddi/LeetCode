class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        int i = 0;
        while(i < size){
            for(int j = i+1; j < size; j++){
                    if(nums[i]+nums[j] == target){
                        return{i,j};
                    }
            }
            i++;
        }
    return {};
    }
};