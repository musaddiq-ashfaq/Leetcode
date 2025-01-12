class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0;i<tokens.size();i++){
            if (isdigit(tokens[i][0]) || (tokens[i][0] == '-' && tokens[i].size() > 1)) 
                st.push(stoi(tokens[i]));
            else if(!st.empty()){
                int a = st.top();
                st.pop();
                if(st.empty()){
                    st.push(a);
                    break;
                }
                int b = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    st.push(a+b);
                }
                else if(tokens[i] == "-")
                    st.push(b-a);
                else if(tokens[i] == "*")
                    st.push(a*b);
                else{
                    st.push(b/a);
                }
            }
            else
                break;
        }
        return st.top();
    }
};
