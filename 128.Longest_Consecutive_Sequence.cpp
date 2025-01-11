class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);

        int max_counter = 0, counter = 0;
        for (auto &n:s) {
            if (!s.count(n - 1)){
                int val = n;
                while (s.count(val)) {
                    counter++;
                    val++;
                }
            }

            if(counter > max_counter)
                max_counter = counter;
            counter = 0;
        }
        return max_counter;
    }
};
