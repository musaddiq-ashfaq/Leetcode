class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> map;
        unordered_map <string,char> rev_map;
        vector<string> words;
        string word = "";
        for(char c : s){
            if(c == ' ')
            {
                words.push_back(word);
                word = "";
            }
            else
                word+=c;
        }
        words.push_back(word);
        
        if(words.size() != pattern.length())
            return false;

        for(int i = 0;i<pattern.length();i++){
            string w = words[i];
            if(map.find(pattern[i]) != map.end()){
                if(map[pattern[i]] != w){
                    return false;
                }
            }
            else{
                map[pattern[i]] = w;
            }

            if(rev_map.find(w) != rev_map.end()){
                if(rev_map[w] != pattern[i]){
                    return false;
                }
            }
            else
                rev_map[w] = pattern[i];
        }
        return true;
    }
};