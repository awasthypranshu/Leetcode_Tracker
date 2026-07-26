// Last updated: 26/07/2026, 22:04:37
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missingNo = 1;
        int dupNo = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if((nums[i] - nums[i-1]) > 1){
                missingNo = (nums[i] + nums[i-1])/2;
            }
            if(nums[i] == nums[i-1]){
                dupNo = nums[i];
            }
        }
        if(nums[nums.size()-1] != nums.size()){
            missingNo = nums.size();
        }
        return{dupNo,missingNo};
    }
};