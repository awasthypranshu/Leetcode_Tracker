// Last updated: 26/07/2026, 22:04:43
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<long long,int>mpp;
        int count = 0;
        int sum = 0;
        mpp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];

            int remove = sum - k;

            count = count + mpp[remove];

            mpp[sum] = mpp[sum] + 1;
        }    
        return count;
    }
};