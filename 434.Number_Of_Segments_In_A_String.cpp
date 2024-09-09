class Solution {
public:
    int countSegments(string s) {
        if (s == "")
            return 0;
        vector<string> vec;
        int i = 0;
        string word = " ";
        while (i < s.length()) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (word != " ") {
                    vec.push_back(word);
                    word = " ";
                }
            }
            i++;
        }
        if (word != " ") {
            vec.push_back(word);
            word = " ";
        }
        return vec.size();
    }
};