class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prdNoZero = 1;
        int count = 0;
        int product = accumulate(begin(nums), end(nums), 1, multiplies<int>());
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i]==0){
                count++;
            }
            if(nums[i]!=0){prdNoZero *= nums[i];}
        }        
        
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i]){
                nums[i] = product/nums[i];
            }
            else if(nums[i]==0 & count > 1){
                        nums[i] = 0;
                    }
            else if (nums[i]==0){
                        nums[i] = prdNoZero;
                    }

        }

        

        return nums;
    }
};