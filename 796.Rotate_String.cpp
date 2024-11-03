class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;
        string new_string = s+s;
        if(new_string.find(goal) != string::npos)
            return true;
        return false;
    }
};
