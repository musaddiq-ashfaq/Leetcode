class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[')
                para.push(c);
            else if(!para.empty() && check(para.top(),c))
                para.pop();
            else
                return false;
        }
        return para.empty();
    }
    bool check(char open , char close)
    {
        if(open == '(' && close == ')' || open == '{' && close == '}' ||
        open == '[' && close == ']')
            return true;
        return false;
    }
};