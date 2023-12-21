
class Solution {
public:
    
    string mergeAlternately(string word1, string word2) {
        int x, flag = 0;
        string merged;

        while (true) {
            if (flag == 0) {
                if (!word1.empty()) {
                    merged += word1.front();
                    word1.erase(0, 1);
                    flag = 1;
                } else {
                    flag = 1;
                }
            }

            if (flag == 1) {
                if (!word2.empty()) {
                    merged += word2.front();
                    word2.erase(0, 1);
                    flag = 0;
                } else {
                    flag = 0;
                }
            }

            if (word1.empty() && word2.empty()) {
                break;
            }
        }

        return merged;
    }
};