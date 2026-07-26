// Last updated: 26/07/2026, 22:06:14
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        set<vector<int>> ans;

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            unordered_set<int> st;

            for (int j = i + 1; j < nums.size(); j++) {

                int third = -(nums[i] + nums[j]);

                if (st.find(third) != st.end()) {
                    ans.insert({nums[i], third, nums[j]});
                }

                st.insert(nums[j]);
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};