// Last updated: 26/07/2026, 22:04:08
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int gnc = 0;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > gnc){
                gnc = candies[i];
            }
        }
        vector<bool> result;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= gnc){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};