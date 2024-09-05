class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int total_sum = mean * (m + n); 
        int sum_of_rolls = 0;
        for (int roll : rolls) {
            sum_of_rolls += roll;
        }
        int missing_sum = total_sum - sum_of_rolls;
        if (missing_sum < n || missing_sum > 6 * n)
            return {};
        vector<int> result(n, 1);
        missing_sum -= n;
        for (int i = 0; i < n && missing_sum > 0; i++) {
            int add = min(5, missing_sum); 
            result[i] += add;
            missing_sum -= add;
        }
        return result;
    }
};
