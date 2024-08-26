class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        int numbers = 0, temp = 0, ans = 0;
        for (int i = len - 1; i >= 0; i--) {
            numbers = int(columnTitle[i] - '@');
            ans = ans + (pow(26, temp) * numbers);
            temp++;
        }
        return ans;
    }
};