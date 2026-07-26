// Last updated: 26/07/2026, 22:05:30
class Solution {
public:
    int findMin(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i < nums.size()-1 && nums[i] > nums[i+1]){
                return nums[i+1];
            }
        }
        return nums[0];
    }
};