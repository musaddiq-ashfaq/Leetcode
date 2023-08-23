class Solution {
public:
    int strStr(string haystack, string needle) {
        int sn = needle.size();
        int sh = haystack.size();
        for(int i = 0; i< sh;i++)
        {
            int j;
            for(j = 0;j<sn;j++)
            {
                if(haystack[i+j] != needle[j])
                    break;
            }
            if(j == sn)
                return i;
        }
        return -1;
    }
};
//Time complexity:O(n)
//Algorithm: Naive