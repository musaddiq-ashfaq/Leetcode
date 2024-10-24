class Solution {
public:
    string multiply(string num1, string num2) {
        int l1 = num1.size(), l2 = num2.size();
        vector<int> result_vec(l1 + l2, 0);
        for (int i = l1 - 1; i >= 0; i--) {
            for (int j = l2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');  
                int sum = mul + result_vec[i + j + 1];  
                result_vec[i + j + 1] = sum % 10;  
                result_vec[i + j] += sum / 10;     
            }
        }
        string res= "";
        for (int num : result_vec) {
            if (!(res.empty() && num == 0)) {  
                res += to_string(num);
            }
        }
        if(res.empty())
            return "0";
        return res;
    }
};
