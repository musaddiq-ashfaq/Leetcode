class Solution
{
public:
    int myAtoi(string s)
    {
        bool neg = false;
        double number = 0;
        int i = 0;
        while (i < s.size() && s[i] == ' ')
            i++;
        if (i < s.size() && (s[i] == '+' || s[i] == '-'))
        {
            neg = (s[i] == '-');
            i++;
        }
        while (i < s.size() && isdigit(s[i]))
        {
            long long int temp = s[i] - '0';
            number = number * 10 + temp;
            i++;
        }
        if (neg)
            number = -1 * number;
        if (number > INT_MAX)
            return INT_MAX;
        else if (number < INT_MIN)
            return INT_MIN;
        return number;
    }
};