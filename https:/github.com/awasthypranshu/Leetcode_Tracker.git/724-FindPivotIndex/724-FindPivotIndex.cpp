// Last updated: 26/07/2026, 22:04:35
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rs = 0;
        for(int i = 0; i < nums.size(); i++){
            rs = rs + nums[i];
        }
        int ls = 0;
        for(int i = 0; i < nums.size(); i++){
            rs = rs - nums[i];
            if(rs == ls){
                return i;
            }
            ls = ls + nums[i];
        }
        return -1;
    }
};