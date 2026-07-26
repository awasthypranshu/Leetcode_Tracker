// Last updated: 26/07/2026, 22:04:20
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sort in ascending order
        
        // Check from the largest side downwards
        for (int i = nums.size() - 1; i >= 2; i--) {
            if (nums[i-2] + nums[i-1] > nums[i]) {
                return nums[i-2] + nums[i-1] + nums[i]; // valid triangle
            }
        }
        
        return 0; // no triangle possible
    }
};
