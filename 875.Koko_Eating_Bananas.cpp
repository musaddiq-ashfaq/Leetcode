class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; 
        int right = *max_element(piles.begin(), piles.end());
        int k = *max_element(piles.begin(),piles.end());

        while(left <= right){
            int mid = (left + right)/2;
            long long sum = 0;
            for(int i = 0;i<piles.size();i++){
                sum+=(piles[i]+mid-1)/mid;
            }
            if(sum <= h)
                k = min(k,mid);
            
            if(sum <= h)
                right = mid -1;
            else
                left = mid + 1;
        }
        return k;
    }
};
