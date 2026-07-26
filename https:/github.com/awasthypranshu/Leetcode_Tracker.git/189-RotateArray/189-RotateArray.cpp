// Last updated: 26/07/2026, 22:05:22
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int o = k;
        vector<int> temp(n);
        for(int i = 0; i < n; i++) {
            if(k >= n) {
                k=0;
            }
            temp[k] = nums[i];
            k++;
        }
        nums.erase(nums.begin(),nums.end()); 

        for(int i = 0; i < n; i++) {
            nums.push_back(temp[i]);
        }
    }
};