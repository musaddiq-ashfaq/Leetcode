class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size())
            return false;
        if (A == B) {
            vector<int> freq(26, 0);
            for (char c : A) {
                freq[c - 'a']++;
                if (freq[c - 'a'] > 1)
                    return true;
            }
            return false;
        }
        vector<int> diff;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] != B[i])
                diff.push_back(i);
        }

        if (diff.size() == 2 && A[diff[0]] == B[diff[1]] &&
            A[diff[1]] == B[diff[0]])
            return true;

        return false;
    }
};
