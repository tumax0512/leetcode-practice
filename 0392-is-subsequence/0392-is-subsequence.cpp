class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0, tIndex = 0;

        while (sIndex < s.length() && tIndex < t.length()) {
            if (s[sIndex] == t[tIndex]) {
                // 如果 s 的當前字符等於 t 的當前字符，移動 s 的索引
                sIndex++;
            }
            // 無論如何，移動 t 的索引
            tIndex++;
        }

        // 如果 s 的索引等於 s 的長度，則 s 是 t 的子序列
        return sIndex == s.length();
    }
};