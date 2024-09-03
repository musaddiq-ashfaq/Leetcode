class Solution {
public:
    int getLucky(string s, int k) {
        char temp = ' ';
        string nmbr = "";
        for (int i = 0; i < s.length(); i++) {
            temp = s[i];
            int var = temp - 'a' + 1;
            nmbr += to_string(var);
        }
        int sum = 0;
        while (k > 0) {
            sum = 0;
            for (int i = 0; i < nmbr.length(); i++) {
                sum += (nmbr[i] - '0');
            }
            nmbr = to_string(sum);
            k--;
        }
        return sum;
    }
};