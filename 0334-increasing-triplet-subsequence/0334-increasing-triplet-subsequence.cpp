class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> maxRight(n);
        maxRight[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; --i) {
            maxRight[i] = std::max(maxRight[i + 1], nums[i + 1]);
        }

        int minLeft = nums[0];

        for (int i = 1; i < n - 1; ++i) {
            if (minLeft < nums[i] && nums[i] < maxRight[i]) {//代表右邊還有更大的值and左邊還有更小的值
                return true;
            }
            minLeft = std::min(minLeft, nums[i]);
        }

        return false;
    }
};