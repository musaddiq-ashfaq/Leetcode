class Solution {
public:
    int addDigits(int num) {
        while(true){
            if(to_string(num).length() == 1)
                break;
            else{
                int temp = 0;
                while(num > 0){
                    temp+=num%10;
                    num/=10;
                }
                num = temp;
            }
        }
        return num;
    }
};