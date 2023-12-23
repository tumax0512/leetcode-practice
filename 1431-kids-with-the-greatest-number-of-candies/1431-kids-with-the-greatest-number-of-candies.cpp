class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> x = candies;
        vector<bool>result;
        std::sort(x.begin(), x.end());
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= x[candies.size() - 1]) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
    return result;
    }
};