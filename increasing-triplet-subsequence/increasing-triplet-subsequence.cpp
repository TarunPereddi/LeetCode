class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    int n = nums.size();
    int small = INT_MAX;  // Smallest element encountered so far
    int big = INT_MAX;    // Second smallest element encountered so far

    for (int i = 0; i < n; i++) {
        if (nums[i] <= small) {
            small = nums[i];  // Update smallest element
        } else if (nums[i] <= big) {
            big = nums[i];    // Update second smallest element
        } else {
            return true;      // Found a number greater than both small and big
        }
    }

    return false;  // No increasing triplet found
}


};