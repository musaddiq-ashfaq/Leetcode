class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int n1, n2;
            if (i >= 0) {
                n1 = num1[i] - '0';
            } else {
                n1 = 0;
            }
            if (j >= 0) {
                n2 = num2[j] - '0';
            } else {
                n2 = 0;
            }
            int sum = n1 + n2 + carry;
            carry = sum / 10;
            result += (sum % 10) + '0';
            
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
