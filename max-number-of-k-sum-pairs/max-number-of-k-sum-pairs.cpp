class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        vector<int> num = nums;
        sort(num.begin(),num.end());
        int left = 0; int right = num.size()-1;
        int count = 0;
        while(left<right){
            int result = num[left]+num[right];
            if(result!=k){
                if(result>k){
                    right--;
                }
                else if(result<k){
                    left++;
                }               
            }
            else{
                left++;
                right--;
                count++;
            }
        }
        return count;
    }
};