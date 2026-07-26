// Last updated: 26/07/2026, 22:06:20
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxVol = 0;
        while(left < right){
            int h = min(height[left],height[right]);
            int l = right - left;
            int vol = h*l;
            maxVol = max(vol,maxVol);
            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxVol;
    }
};