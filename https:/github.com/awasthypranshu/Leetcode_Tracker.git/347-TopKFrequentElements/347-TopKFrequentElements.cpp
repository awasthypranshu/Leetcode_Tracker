// Last updated: 26/07/2026, 22:04:59
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>>freq;
        for(auto &it : mpp){
            freq.push_back({it.second,it.first});
        }
        vector<int>ans;
        sort(freq.begin(),freq.end());
        for(int i=0; i < k; i++){
            ans.push_back(freq[freq.size()-i-1][1]);
        }
        return ans;
    }
};