// Last updated: 26/07/2026, 22:06:10
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        while(j < n) {
            if(nums[j] != nums[i]) {
                nums[i+1] = nums[j];
                i++;
                j++;
            }
            else {
                j++;
            }
        }
            return i+1;
    }
};