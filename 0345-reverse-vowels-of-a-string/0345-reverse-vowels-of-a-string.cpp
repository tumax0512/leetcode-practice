class Solution {
public:
    string reverseVowels(string s) {
        cout << s << endl;
        int left = 0, right = s.size() - 1;
        char TempL, TempR;

        while (left < right) {
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            TempL = s[left];

            while (left < right && !isVowel(s[right])) {
                right--;
            }
            TempR = s[right]; 

            // 交換字母
            s[left] = TempR;
            s[right] = TempL;

            left++;
            right--;
        }

        cout << "Result: " << s << endl;
        return s;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E'
            || c == 'i' || c == 'I' || c == 'o' || c == 'O'
            || c == 'u' || c == 'U';
    }
};


