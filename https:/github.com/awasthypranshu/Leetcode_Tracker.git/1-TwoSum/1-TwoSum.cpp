// Last updated: 26/07/2026, 22:06:31
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            int n = target - nums[i];
            if(mpp.find(n) != mpp.end()){
                return {mpp[n],i};
            }else{
                mpp[nums[i]] = i;
            }
        }
        return {};
    }
};