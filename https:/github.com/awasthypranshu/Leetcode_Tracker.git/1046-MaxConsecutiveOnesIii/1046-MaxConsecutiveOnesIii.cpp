// Last updated: 26/07/2026, 22:04:19
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int maxi = 0;
        int n = nums.size();
        int size = 0;
        int z = k;
        while(r < n){
            if(nums[r] == 1){
                size = r - l + 1;
                if(size > maxi){
                    maxi = size;
                }
                r++;
            }
            else if(nums[r] == 0 && z > 0){
                size = r - l + 1;
                if(size > maxi){
                    maxi = size;
                }
                r++;
                z--;
            }
            else if(nums[r] == 0 && z == 0){
                if(nums[l] == 1){
                    while(nums[l] != 0){
                        l++;
                    }
                    
                }
                else if(nums[l] == 0){
                    l++;
                    z++;
                }
            }
        }
        return maxi;
    }
};