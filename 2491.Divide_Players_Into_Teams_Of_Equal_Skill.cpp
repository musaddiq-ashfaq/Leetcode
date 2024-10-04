class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        sort(skill.begin(),skill.end());
        int l = 0, r = skill.size()-1;
        int prev_sum = skill[l]+skill[r];
        sum=skill[l]*skill[r];
        l++;
        r--;
        while(l<r){
            if(skill[l]+skill[r] == prev_sum){
                sum=sum+ (skill[l] * skill[r]);
                l++;
                r--;
            }
            else{
                return -1;
            }
        }
        return sum;
    }
};