// Last updated: 26/07/2026, 22:05:27
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 || i == nums.size()-1){
                if(i == 0 && nums[i] > nums[i+1]){
                    return i;
                    break;
                }
                if(i == nums.size()-1 && nums[i] > nums[i-1]){
                    return i;
                    break;
                }
            }
            else{
                if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
};