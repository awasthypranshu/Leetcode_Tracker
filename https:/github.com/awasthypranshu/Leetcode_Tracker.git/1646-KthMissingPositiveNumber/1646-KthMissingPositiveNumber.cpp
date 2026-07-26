// Last updated: 26/07/2026, 22:03:59
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int , int> mpp;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        int j = 1;
        while(k > 0){
            if(mpp.find(j) == mpp.end()){
                k--;
                ans = j;
                j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};