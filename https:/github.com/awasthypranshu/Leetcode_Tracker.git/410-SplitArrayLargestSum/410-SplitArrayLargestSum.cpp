// Last updated: 26/07/2026, 22:04:53
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        int final = 0;
                    int finalmid = 0;
        while(left <= right){
            int mid = (left+right)/2;
            int kd = 1;
            int sum = 0;

            for(int i = 0; i < nums.size(); i++){
                sum = sum + nums[i];
                if(sum <= mid){
                    continue;
                }else{
                    kd++;
                    sum = nums[i];
                }
            }
            if(kd >= final){
                final = kd;
            }
            if(kd <= k){
                finalmid = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return finalmid;
    }
};