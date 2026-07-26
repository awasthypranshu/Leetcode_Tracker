// Last updated: 26/07/2026, 22:04:40
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        if (flowerbed.size() == 1){
            if(flowerbed[0] == 1){
                if (count >= n) return true;
                else return false;
            }
            else{
                count++;
                if (count >= n) return true;
                else return false;
            }
        }
        for(int i = 0; i < flowerbed.size(); i++) {
            if(i == 0){
                if(flowerbed[i] == 1){
                    continue;
                }
                else if(flowerbed[i] == 0){
                    if(flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        count++;
                    }
                }
            }
            else if(i > 0 && i < flowerbed.size()-1){
                if(flowerbed[i] == 1){
                    continue;
                }
                else if(flowerbed[i] == 0){
                    if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        count++;
                    }
                    else{
                        continue;
                    }
                }
            }
            else{
                if(flowerbed[i] == 1){
                    continue;
                }
                else if(flowerbed[i] == 0){
                    if(flowerbed[i-1] == 0){
                        flowerbed[i] = 1;
                        count++;
                    }
                }
            }
        }
        if(count >= n){
            return true;
        }
        else{
            return false;
        }
        return -1;
    }
};