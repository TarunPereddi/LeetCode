class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0; 
        int right = height.size() - 1;
        while (left < right) {
            int width = right - left;
            maxarea = max(maxarea, min(height[left], height[right]) * width);
            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxarea;
    }
};