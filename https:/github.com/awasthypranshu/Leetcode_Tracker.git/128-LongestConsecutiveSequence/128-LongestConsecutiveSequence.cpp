// Last updated: 26/07/2026, 22:05:41
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int streak = 1;
        int maxi = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            else if(nums[i+1] == nums[i]+1){
                streak++;
                maxi = max(streak,maxi);
            }else{
                streak=1;
            }
        }
        return maxi;
    }
};