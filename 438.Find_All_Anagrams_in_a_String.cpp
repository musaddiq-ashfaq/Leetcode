class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int> p_freq;
        map<char, int> str_freq;
        vector<int> vec;

        int l = p.length();
        int right = l - 1, left = 0;

        for (int i = 0; i <= right; i++) {
            str_freq[s[i]]++;
            p_freq[p[i]]++;
        }

        while (right < s.length()) {
            if (p_freq == str_freq) 
                vec.push_back(left);
            str_freq[s[left]]--;
            if (str_freq[s[left]] == 0) {
                str_freq.erase(s[left]);
            }
            left++;
            right++;
            if (right < s.length())
                str_freq[s[right]]++;
        }
        return vec;
    }
};

