class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){count++;}
        }
        nums.erase(remove(begin(nums), end(nums), 0), end(nums));
        for(int i = 0; i < count; i++ ){
            nums.push_back(0);
        }
    }
};