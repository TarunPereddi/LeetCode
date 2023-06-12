class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        string temp = "";
        for(int i = 0; i < nums.size(); i++){
            temp+=to_string(nums[i]);
            int x = i;
            while(i < nums.size()-1 && nums[i]+1==nums[i+1]){
                i++;
            }
            if(x!=i){
                temp+="->";
                temp+=to_string(nums[i]);
            }
            result.push_back(temp);
            temp = "";
        }
        return result;
    }
};