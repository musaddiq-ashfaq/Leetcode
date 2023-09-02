class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        multiset<char> my_set;
        for(char c : s)
            my_set.insert(c);
        for(char c : t)
        {
            auto it = my_set.find(c);
            if(it != my_set.end())
                my_set.erase(it);
            else
                return false;
        }
        return true;
    }
};