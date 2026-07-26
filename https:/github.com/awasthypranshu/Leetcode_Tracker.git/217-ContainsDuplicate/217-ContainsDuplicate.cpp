// Last updated: 26/07/2026, 22:05:18
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int ,int>mpp;
        for(int i = 0; i < nums.size(); i++){
            if(mpp.find(nums[i]) != mpp.end()){
                return true;
            }else{
                mpp[nums[i]]++;
            }
        }
        return false;
    }
};