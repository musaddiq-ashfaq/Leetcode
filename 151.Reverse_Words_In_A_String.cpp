class Solution {
public:
    string reverseWords(string s) {
        int l = s.length()-1;
        string new_string = "";
        while(l >= 0){
            while(l>=0 && s[l] == ' ')
                l--;
            if(l<0)
                break;
            string word = "";
            while(l>= 0 && s[l] != ' '){
                word+=s[l];
                l--;
            }
            reverse(word.begin(),word.end());
            if(new_string.empty() == false)
                new_string+=" ";
            new_string+=word;
            l--;
        }
        return new_string;
    }
};
