class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num);
        int n = str.size();
        int maxIndex = n - 1;  
        int left = -1, right = -1;  
        for (int i = n - 2; i >= 0; --i) {
            if (str[i] < str[maxIndex]) {
                left = i;
                right = maxIndex;
            }
            else if (str[i] > str[maxIndex])
                maxIndex = i;
        }
        if (left != -1) {
            swap(str[left], str[right]);
            return stoi(str);
        }
        return num;
    }
};

