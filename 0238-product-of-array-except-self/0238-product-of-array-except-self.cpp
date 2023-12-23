class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> l2r(n, 1);
        std::vector<int> r2l(n, 1);

        int cur_val = 1;
        for (int i = 0; i < n; ++i) {
            cur_val *= nums[i];
            l2r[i] = cur_val;
        }

        cur_val = 1;
        for (int i = n - 1; i >= 0; --i) {
            cur_val *= nums[i];
            r2l[i] = cur_val;
        }

        std::vector<int> result(n, 1);
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                result[i] = r2l[i + 1];
            } else if (i == n - 1) {
                result[i] = l2r[i - 1];
            } else {
                result[i] = l2r[i - 1] * r2l[i + 1];
            }
        }

        return result;
    }
};
