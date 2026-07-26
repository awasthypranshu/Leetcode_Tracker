// Last updated: 26/07/2026, 22:06:02
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>left_max(n);
        vector<int>right_max(n);
        left_max[0] = INT_MIN;
        right_max[n-1] = INT_MIN;
        for(int i=1; i<n; i++){
            if(height[i-1] > left_max[i-1]){
                left_max[i] = height[i-1];
            }else{
                left_max[i] = left_max[i-1];
            }
        }
        for(int i=n-2; i>=0; i--){
            if(height[i+1] > right_max[i+1]){
                right_max[i] = height[i+1];
            }else{
                right_max[i] = right_max[i+1];
            }
        }
        int i = 1;
        int vol = 0;
        while(i < height.size()-1){
            if((height[i] < left_max[i]) && (height[i] < right_max[i])){
                vol = vol + min(left_max[i], right_max[i]) - height[i];
            }
            i++;
        }
        return vol;
    }
};