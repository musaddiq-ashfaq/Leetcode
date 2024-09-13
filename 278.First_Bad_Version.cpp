// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n, mid = 0, smallest = n;
        while(start <= end){
            mid = start + (end - start) / 2;
            cout<<mid<<endl;
            if(isBadVersion(mid)){
                end = mid - 1;
                if(smallest > mid)
                    smallest = mid;
            }
            else{
                start = mid + 1;
            }
        }
        return smallest;
    }
};