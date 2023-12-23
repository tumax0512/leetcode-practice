class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                cnt++;
                i--;  // 修正刪除元素後的索引
            }
        }

        while (cnt > 0) {
            nums.push_back(0);
            cnt--;
        }
    }
};