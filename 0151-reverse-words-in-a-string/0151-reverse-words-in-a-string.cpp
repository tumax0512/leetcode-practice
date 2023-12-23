class Solution {
public:
    string reverseWords(string s) {
    stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        // 將單詞反轉
        reverse(words.begin(), words.end());

        // 將反轉後的單詞拼接成字符串
        string result;
        for (const string& w : words) {
            result += w + " ";
        }

        // 移除末尾的空格
        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }

};