// Last updated: 26/07/2026, 22:04:26
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 1;
        int max = *max_element(piles.begin(), piles.end());
        int left = min;
        int right = max;
        int k = INT_MAX;
        int hrsMin = INT_MAX;
        while(left <= right){
            int mid = (left+right)/2;
            long long hrs = 0;
            for (int bananas : piles) {
                hrs += (bananas + mid - 1) / mid;
            }
            if (hrs <= h) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};