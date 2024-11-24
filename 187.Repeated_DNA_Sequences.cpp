class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> vec;
        unordered_set<string> record;
        unordered_set<string> result;
        if(s.length()<10)
            return vec;
        
        string str = "";
        for(int i = 0;i<10;i++){
            str+=s[i];
        }
        record.insert(str);
        int right = 10;
        while(right<s.length()){
            str.erase(0, 1);
            str+=s[right];
            if(record.contains(str))
                result.insert(str);
            record.insert(str);
            right++;
        }
        vec.assign(result.begin(), result.end());
        return vec;
    }
};
