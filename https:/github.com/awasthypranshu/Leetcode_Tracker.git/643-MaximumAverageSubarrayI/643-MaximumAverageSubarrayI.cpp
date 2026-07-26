// Last updated: 26/07/2026, 22:04:39
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double max = INT_MIN;
        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
        }
        if(sum > max) max = sum;
        for(int i = k; i < nums.size(); i++){
            sum = (sum - nums[i-k]) + nums[i];
            if(sum > max) max = sum;
        }
        return max/k;
    }
};