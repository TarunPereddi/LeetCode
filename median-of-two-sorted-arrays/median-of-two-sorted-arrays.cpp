class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();

    // Ensure nums1 is smaller or equal in size to nums2
    if (m > n) {
        return findMedianSortedArrays(nums2, nums1);
    }

    int low = 0;
    int high = m;
    int totalLength = (m + n + 1) / 2;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = totalLength - partitionX;

        int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];

        int minX = (partitionX == m) ? INT_MAX : nums1[partitionX];
        int minY = (partitionY == n) ? INT_MAX : nums2[partitionY];

        if (maxX <= minY && maxY <= minX) {
            // Found the correct partitions
            if ((m + n) % 2 == 0) {
                // Even length, average of the middle two elements
                return (max(maxX, maxY) + min(minX, minY)) / 2.0;
            } else {
                // Odd length, maximum of the left elements is the median
                return max(maxX, maxY);
            }
        } else if (maxX > minY) {
            // Move towards the left in nums1
            high = partitionX - 1;
        } else {
            // Move towards the right in nums1
            low = partitionX + 1;
        }
    }

    // If the input arrays are not sorted, return an error value (e.g., -1) or handle the case according to your requirements
    return -1;
}

};