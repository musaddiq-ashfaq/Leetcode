class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> new_s;
        vector<char> new_t;
        for(int i = 0;i<s.length();i++){
            if(s[i]!='#')
                new_s.push_back(s[i]);
            else{
                if(!new_s.empty())
                    new_s.erase(new_s.begin()+i-1);
            }
        }
        for(int i = 0;i<t.length();i++){
            if(t[i]!='#')
                new_t.push_back(t[i]);
            else{
                if(!new_t.empty())
                    new_t.erase(new_t.begin()+i-1);
            }
        }
        if(new_s == new_t)
            return true;
        return false;
    }
};
