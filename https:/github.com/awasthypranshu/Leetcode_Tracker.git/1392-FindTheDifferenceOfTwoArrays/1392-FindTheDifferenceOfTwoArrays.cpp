// Last updated: 26/07/2026, 22:04:12
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> mpp1;
        set<int> mpp2;

        for (int i = 0; i < nums1.size(); i++) {
            mpp1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            mpp2.insert(nums2[i]);
        }

        vector<int> arr1;
        vector<int> arr2;
        set<int> seen1, seen2; // to ensure uniqueness

        for (int i = 0; i < nums1.size(); i++) {
            if (mpp2.find(nums1[i]) == mpp2.end() && seen1.find(nums1[i]) == seen1.end()) {
                arr1.push_back(nums1[i]);
                seen1.insert(nums1[i]);
            }
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (mpp1.find(nums2[i]) == mpp1.end() && seen2.find(nums2[i]) == seen2.end()) {
                arr2.push_back(nums2[i]);
                seen2.insert(nums2[i]);
            }
        }

        return {arr1, arr2};
    }
};