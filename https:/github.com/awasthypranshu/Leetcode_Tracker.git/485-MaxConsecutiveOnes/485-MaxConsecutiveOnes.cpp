// Last updated: 26/07/2026, 22:04:52
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int> temp;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                count++;
            }
            if(nums[i] == 0 || i == n-1) {
                temp.push_back(count);
                count = 0;
            }
        }

        int m = temp.size();
        int l = 0;
        for(int i = 0; i < m; i++) {
            if(temp[i] > l) {
                l = temp[i];
            }
        }
        return l; 
    }
};