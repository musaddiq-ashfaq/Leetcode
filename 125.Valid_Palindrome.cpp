class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";
        if (s == " ")
            return true;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                new_s += tolower(s[i]);
            }

            if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
                new_s += s[i];
            }
        }
        int start = 0, end = new_s.length() - 1;
        cout << new_s;
        while (start <= end) {
            if (new_s[start] == new_s[end]) {
                start++;
                end--;
            } else {
                return false;
            }
        }
        return true;
    }
};