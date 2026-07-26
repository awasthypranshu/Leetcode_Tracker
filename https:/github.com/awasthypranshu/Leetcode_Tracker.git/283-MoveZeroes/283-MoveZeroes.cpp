// Last updated: 26/07/2026, 22:05:05
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        int m = temp.size();

        while(m<=n) {
            temp.push_back(0);
            m++;
        } 

        for(int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
    }
};