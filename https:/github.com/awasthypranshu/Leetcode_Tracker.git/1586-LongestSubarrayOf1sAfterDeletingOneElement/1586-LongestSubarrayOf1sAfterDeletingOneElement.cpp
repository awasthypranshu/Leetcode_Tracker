// Last updated: 26/07/2026, 22:04:03
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        int count = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0 && zero == 0){
                zero++;
            }
            else if(nums[i] == 0 && zero == 1){
                count = one + two;
                if(count > max){
                    max = count;
                }
                zero = 1;  
                one = two;
                two = 0;
            }
            else if(nums[i] == 1 && zero == 1){
                two++;
            }
            else if(nums[i] == 1 && zero == 0){
                one++;
            }
        }
        count = one + two;
        if(count > max){
            max = count;
        }
        if(max == nums.size()) return max - 1;
        return max;
    }
};