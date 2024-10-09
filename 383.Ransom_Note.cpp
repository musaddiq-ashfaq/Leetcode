class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> counter;
        for(int i = 0;i<ransomNote.length();i++)
            counter[ransomNote[i]]++;
        for(int i = 0;i<magazine.length();i++)
            counter[magazine[i]]--;
        for (auto i : counter){
            if(i.second > 0)
                return false;
        }
        return true;
    }
};
