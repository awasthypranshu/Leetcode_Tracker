// Last updated: 26/07/2026, 22:05:31
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++){
            int product = 1;
            for(int j = i; j < nums.size(); j++){
                product = product * nums[j];
                if(product > max){
                    max = product;
                }
            }
        }
    return max; 
    }
};