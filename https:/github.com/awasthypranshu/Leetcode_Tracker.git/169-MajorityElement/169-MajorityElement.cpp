// Last updated: 26/07/2026, 22:05:24
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0,c1 = 0;
        int el;
        for(int i=0; i<nums.size(); i++){
            if(count == 0) {
                count = 1;
                el = nums[i];
            }
            else if(el == nums[i]){
                count++;
            }
            else {
                count--;
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el) {
                c1++;
            }
            if(c1>nums.size()/2){
                return el;
            }
        }
        return 1;
    }
};