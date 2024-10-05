class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        map<char,int> s1_freq;
        for(int i = 0;i<s1.size();i++){
            s1_freq[s1[i]]++;
        }

        map<char,int> s2_window_freq;
        int window_size = s1.size();
        for(int i= 0;i<window_size;i++){
            s2_window_freq[s2[i]]++;
        }

        if(s1_freq == s2_window_freq)
            return true;
        
        for(int i = window_size;i<s2.size();i++){
            char left_char = s2[i-window_size];
            if(s2_window_freq[left_char]==1)
                s2_window_freq.erase(left_char);
            else
                s2_window_freq[left_char]--;

            s2_window_freq[s2[i]]++;

            if(s1_freq == s2_window_freq)
                return true;
        }
        return false;
    }
};