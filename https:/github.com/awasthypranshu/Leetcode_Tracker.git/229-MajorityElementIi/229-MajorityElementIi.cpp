// Last updated: 26/07/2026, 22:05:17
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<long long,int>mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]] = mpp[nums[i]] + 1;
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        vector<int>res;
        int m = mpp.size();
        for(int i = 0; i < m; i++){
            if(mpp[nums[i]] > n/3){
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};