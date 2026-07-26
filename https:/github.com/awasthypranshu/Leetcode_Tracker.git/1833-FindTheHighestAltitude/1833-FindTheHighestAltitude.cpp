// Last updated: 26/07/2026, 22:03:49
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0;
        int max = 0;
        for(int i = 0; i < gain.size(); i++){
            alt = alt + gain[i];
            if(alt > max){
                max = alt;
            }
        }
        return max;
    }
};