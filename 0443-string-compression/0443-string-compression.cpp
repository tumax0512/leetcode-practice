class Solution {
public:
    int compress(std::vector<char>& chars) {
        int pos = 0;
        for (int index = 1; index <= chars.size(); index++) {
            int count = 1;
            while (index < chars.size() && chars[index] == chars[index - 1]) {
                count++;
                index++;
            }
            chars[pos++] = chars[index - 1];
            if (count > 1) {
                std::string countStr = std::to_string(count);
                for (char c : countStr) {
                    chars[pos++] = c;
                }
            }
        }
        return pos;
    }
};
