class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for(int i = 0;i<s.size();i++)
        {
            int counter = 1;
            for(int j = i+1;j<s.size();j++)
            {
                if(s[i] != s[j])
                    counter++;
                else
                    break;
            }
            if(counter > max)
                max = counter;
        }
        return max;
    }
};