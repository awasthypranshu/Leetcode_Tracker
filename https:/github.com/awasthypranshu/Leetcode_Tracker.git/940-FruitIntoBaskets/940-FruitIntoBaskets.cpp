// Last updated: 26/07/2026, 22:04:23
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int r = 0;
        int size = 0;
        int maxi = 0;
        map<int , int> mpp;
        while(r < fruits.size()){
            mpp[fruits[r]]++;
            while(mpp.size() > 2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
                l++;
            }
            size = r - l + 1;
            maxi = max(size,maxi);
            r++;
        }
        return maxi;
    }
};