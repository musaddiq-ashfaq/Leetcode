class Solution
{
public:
    int romanToInt(string s)
    {
        int I = 0, V = 0, X = 0, L = 0, C = 0, D = 0, M = 0, number = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == 'I')
            {
                I = static_cast<int>(ch);
                I = 1;
                if (i + 1 < s.length() && s[i + 1] == 'V' || s[i + 1] == 'X')
                    number -= I;
                else
                    number += I;
            }
            else if (ch == 'V')
            {
                V = static_cast<int>(ch);
                V = 5;
                number += V;
            }
            else if (ch == 'X')
            {
                X = static_cast<int>(ch);
                X = 10;
                if (i + 1 < s.length() && s[i + 1] == 'L' || s[i + 1] == 'C')
                    number -= X;
                else
                    number += X;
            }
            else if (ch == 'L')
            {
                L = static_cast<int>(ch);
                L = 50;
                number += L;
            }
            else if (ch == 'C')
            {
                C = static_cast<int>(ch);
                C = 100;
                if (i + 1 < s.length() && s[i + 1] == 'D' || s[i + 1] == 'M')
                    number -= C;
                else
                    number += C;
            }
            else if (ch == 'D')
            {
                D = static_cast<int>(ch);
                D = 500;
                number += D;
            }
            else if (ch == 'M')
            {
                M = static_cast<int>(ch);
                M = 1000;
                number += M;
            }
            else
                continue;
        }
        return number;
    }
};

// Time comaplexity : O(n) where n is length of string

// using Map
class Solution
{
public:
    int romanToInt(string s)
    {
        int number = 0;
        unordered_map<char, int> map{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        for (int i = 0; i < s.size(); i++)
        {
            if (map[s[i]] < map[s[i + 1]])
            {
                number = number - map[s[i]];
            }
            else
            {
                number = number + map[s[i]];
            }
        }
        return number;
    }
};
//Time complexity : O(n)