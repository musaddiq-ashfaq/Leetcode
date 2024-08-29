class Solution {
public:
    int hammingWeight(int n) {
        string binary = "";
        int counter = 0;
        while(n>0){
            binary+=(n%2);
            n = n/2;
        }
        for(int i = 0;i<binary.length();i++){
            if(binary[i] == 1){
                counter++;
            }
        }
        return counter;
    }
};