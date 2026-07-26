// Last updated: 26/07/2026, 22:03:48
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        int g = 0;
        int s = nums[0];

        //to find the greatest element
        for(int i = 0; i < n; i++) {
            if(nums[i] > g) {
                g = nums[i];
            }
        }
        //to find the smallest element
        for(int i = 0; i < n; i++) {
            if(nums[i] < s) {
                s = nums[i];
            }
        }
        
        while(m < n-1) {
            if(nums[m] > nums[m+1] ) {
                if(nums[m] == g && nums[m+1] == s) {
                    m++;
                    continue;
                }
                return false;    
            }
            m++;
        }
        if (nums[n - 1] > nums[0]) {
            if (nums[n - 1] != g || nums[0] != s) {
                return false; 
            }
        }

        return true;
    }
};