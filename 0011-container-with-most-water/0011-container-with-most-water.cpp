class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, maximum = 0, minimumHeight;
        while (left < right) { 
            minimumHeight = min(height[left], height[right]);
            maximum = max(maximum, minimumHeight * (right - left));
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maximum;
    }
};