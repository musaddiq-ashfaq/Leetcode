class Solution {
public:
    string convertToTitle(int columnNumber) {
        string name = "";
        int number = 0;
        while (columnNumber > 0) {
            columnNumber -= 1;
            number = columnNumber % 26;
            name = name + char(number + 'A');
            columnNumber = columnNumber / 26;
        }

        reverse(name.begin(), name.end());
        return name;
    }
};