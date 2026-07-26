// Last updated: 26/07/2026, 22:06:24
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int left = 0;
        int right = 0;
        vector<int>arr;
        while(left < nums1.size() && right < nums2.size()){
            if(nums1[left] >= nums2[right]){
                arr.push_back(nums2[right]);
                right++;
            }else{
                arr.push_back(nums1[left]);
                left++;
            }
        }    
        while(left < nums1.size()){
            arr.push_back(nums1[left]);
            left++;
        }
        while(right < nums2.size()){
            arr.push_back(nums2[right]);
            right++;
        }

        int s = arr.size();
        if(s%2 == 0){
            double median = (arr[s/2] + arr[s/2 - 1]) / 2.0;
            return median;
        }else{
            double median = arr[s/2];;
            return median;
        }
        return double(-1);
    }
};