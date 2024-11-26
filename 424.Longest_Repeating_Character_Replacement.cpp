class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> umap;
        int max_freq = 0;  
        int max_window = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            umap[s[right]]++;
            max_freq = max(max_freq, umap[s[right]]);
            while ((right - left + 1) - max_freq > k) {
                umap[s[left]]--;
                left++;
            }
            max_window = max(max_window, right - left + 1);
        }
        return max_window;
    }
};

