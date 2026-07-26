// Last updated: 26/07/2026, 22:03:52
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }

        int find;
        int count = 0;
        for(int i = 0; i < n; i++){
            find = k - nums[i];
            if (mpp[nums[i]] > 0 && mpp[find] > 0) {   
                if (nums[i] == find && mpp[nums[i]] < 2) continue; 

                count++;
                mpp[nums[i]]--;   
                mpp[find]--;
            }
        }
        return count;
    }
};