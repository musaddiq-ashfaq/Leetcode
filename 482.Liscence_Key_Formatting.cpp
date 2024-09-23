class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res = "";
        int counter = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != '-') {
                if (s[i] >= 97 && s[i] <= 122) {
                    s[i] = toupper(s[i]);
                    res += s[i];
                } else
                    res += s[i];
                counter++;
            }
            if (counter >= k) {
                counter = 0;
                if (i != 0)
                    res += '-';
            }
        }
        cout << res << endl;
        if (!res.empty() && res.back() == '-') {
            res.pop_back();
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
        return res;
    }
};