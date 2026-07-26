// Last updated: 26/07/2026, 22:03:31
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>vp;
        vector<int>vn;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]<0){
                vn.push_back(nums[i]);
            }
            else if(nums[i]>0){
                vp.push_back(nums[i]);
            }
        } 

        vector<int>result;
        for(int i = 0; i < vp.size(); i++){
            result.push_back(vp[i]);
            result.push_back(vn[i]);
        }
        return result;
    }
};