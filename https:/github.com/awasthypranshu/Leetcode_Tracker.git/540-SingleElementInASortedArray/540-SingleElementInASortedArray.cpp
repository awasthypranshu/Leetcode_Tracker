// Last updated: 26/07/2026, 22:04:45
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count = 1;
        if(nums.size() == 1) return nums[0];
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] != nums[i+1] && count == 1){
                return nums[i];
            }
            else if(nums[i] != nums[i+1] && count > 1){
                count = 1;
            }
            else{
                count++;
            }
        }
        return nums.back();
    }
};