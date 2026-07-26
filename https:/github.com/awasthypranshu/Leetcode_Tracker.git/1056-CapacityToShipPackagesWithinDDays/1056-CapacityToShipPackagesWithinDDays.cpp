// Last updated: 26/07/2026, 22:04:17
class Solution {
public:
    int findSum(vector<int>& arr) {
    int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());;
        int right = findSum(weights);
        int maxd = 0;
        while(left <= right){
            int mid = (left+right)/2;
            int sum = 0;
            int day = 1;
            for(int i = 0; i < weights.size(); i++){
                sum = sum + weights[i];
                if(sum <= mid){
                    continue;
                }else{
                    sum = 0;
                    sum = sum + weights[i];
                    day++;
                }
            }
            if(day <= days){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};