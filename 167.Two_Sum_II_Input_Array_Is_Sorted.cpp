class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0, end = numbers.size() - 1;
        vector<int> indexes;
        while(start< end){
            if(numbers[start] + numbers[end] == target){
                indexes.push_back(start+1);
                indexes.push_back(end+1);
                break;
            }
            else if(numbers[start] + numbers[end] > target)
                end--;
            else
                start++;
        }
        return indexes;
    }
};