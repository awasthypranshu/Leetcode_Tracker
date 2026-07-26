// Last updated: 26/07/2026, 22:05:07
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i <= n; i++) {
            if(i > n-1) return i;
            if(nums[i] == i) {
                continue;
            }
            return i;
        }
        return -1;
    }
};