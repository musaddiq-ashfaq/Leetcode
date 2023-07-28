class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1 , temp = 0;
        int s = digits.size();
        for(int i = s-1;i>=0;i--)
        {
            temp = digits[i] + carry;
            digits[i] = temp%10;
            carry = temp/10;
        }
        if(carry!=0)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};

//Time Complexity : O(n)
//Space Complexity : O(1)