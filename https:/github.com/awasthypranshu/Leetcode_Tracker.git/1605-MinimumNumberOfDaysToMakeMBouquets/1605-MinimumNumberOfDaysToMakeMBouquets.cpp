// Last updated: 26/07/2026, 22:04:01
class Solution {
public:
    int findMax(vector<int>& arr) {
        int maxElement = arr[0];
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] > maxElement)
                maxElement = arr[i];
        return maxElement;
    }

    int findMin(vector<int>& arr) {
        int minElement = arr[0];
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] < minElement)
                minElement = arr[i];
        return minElement;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (1LL * m * k > bloomDay.size()) return -1;
        int left = findMin(bloomDay);
        int right = findMax(bloomDay);
        int mnk = 0;
        while(left <= right){
            int mid = (left + right)/2;
            int nk = 0;
            int count = 0;
            for(int i = 0; i < bloomDay.size(); i++){
                if(mid >= bloomDay[i]){
                    count++;
                }else{
                    count = 0;
                }
                if(count == k){
                    nk++;
                    count = 0;
                }
            }
            if(nk >= m){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
    return left;    
    }
};