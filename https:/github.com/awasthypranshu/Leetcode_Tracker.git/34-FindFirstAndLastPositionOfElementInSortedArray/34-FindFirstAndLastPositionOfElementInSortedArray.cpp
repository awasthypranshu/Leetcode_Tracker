// Last updated: 26/07/2026, 22:06:05
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                first = i;
                while(i < nums.size() && nums[i] == target){
                    last = i;
                    i++;
                }
                break;
            }
        }
        return {first, last};
    }
};