class Solution {
public:
    string addBinary(string a, string b) {
        int a_index = a.length() - 1; 
        int b_index = b.length() - 1; 
        string sum = "";
        int carry = 0;
        int v1 = 0, v2 = 0;

        while(a_index > -1 || b_index > -1 || carry == 1){
            if(a_index < 0)
                v1 = 0;
            else 
                v1 = a[a_index] - '0';
                
            if(b_index < 0)
                v2 = 0;
            else
                v2 = b[b_index] - '0';
            
            int value = v1 + v2 + carry;
            carry = value/2;
            sum += to_string(value % 2);

            a_index--;
            b_index--;
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};
