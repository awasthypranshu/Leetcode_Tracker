// Last updated: 26/07/2026, 22:04:48
class Solution {
public:
    void merge(vector<int>& nums,int left,int mid,int right){
        vector<int> temp;
        int i = left, j = mid + 1;

        while(i <= mid && j <= right){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i]);
                i = i + 1;
            }else{
                temp.push_back(nums[j]);
                j = j + 1;
            }
        }

        while(i <= mid){
            temp.push_back(nums[i]);
            i = i + 1;
        }

        while(j <= right){
            temp.push_back(nums[j]);
            j = j + 1;
        }

        for(int k = left; k <= right; k++){
            nums[k] = temp[k - left];
        }
    }

    int countPairs(vector<int>& nums,int left,int mid,int right){
        int j = mid + 1;
        int count = 0;

        for(int i = left; i <= mid; i++){
            while(j <= right && nums[i] > 2LL*nums[j]){
                j = j + 1;
            }
            count = count + (j - (mid + 1));
        }
        return count;
    }

    int mergeSort(vector<int>& nums,int left,int right){
        int count = 0;
        if(left >= right) return count;

        int mid = (left + right) / 2;

        count = count + mergeSort(nums,left,mid);
        count = count + mergeSort(nums,mid + 1,right);

        count = count + countPairs(nums,left,mid,right);
        merge(nums,left,mid,right);

        return count;
    }

    int reversePairs(vector<int>& nums){
        int n = nums.size();
        return mergeSort(nums,0,n-1);
    }
};