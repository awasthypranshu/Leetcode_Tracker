// Last updated: 26/07/2026, 22:05:12
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix;
        vector<int>suffix(n);
        //Loop for prefix product
        prefix.push_back(1);
        suffix.push_back(1);
        int prod;
        for(int i=1; i<nums.size(); i++){
            prod = nums[i-1]*prod;
            prefix.push_back(prod);
        }

        prod = 1;
        suffix[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            prod = nums[i+1]*prod;
            suffix[i] = prod;
        }
        vector<int>ans;
        for(int i = 0; i<prefix.size(); i++){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;
    }
};