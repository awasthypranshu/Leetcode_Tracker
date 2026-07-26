// Last updated: 26/07/2026, 22:04:10
class Solution {
public:
    int myCeil(double num) {
        int intPart = (int)num;
        if (num > intPart)
            return intPart + 1;
        else
            return intPart;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int sum = threshold;
        int num = 0;
        while(left <= right){
            int total = 0;
            int medium = (left+right)/2;
            for(int i = 0; i < nums.size(); i++){
                total = total + myCeil(((double)nums[i]) / (double)medium);
            }
            if(total <= threshold){
                right = medium - 1;
                num = medium;
            }
            else{
                left = medium + 1;
            }
        }
        return num;
    }
};