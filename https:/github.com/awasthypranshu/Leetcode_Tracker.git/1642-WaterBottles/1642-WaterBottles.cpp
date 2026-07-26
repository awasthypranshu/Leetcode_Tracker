// Last updated: 26/07/2026, 22:04:00
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sold = numBottles;
        int full = 0;
        int empty = numBottles;
        int rem = 0;
        while(empty >= numExchange){
            full = empty / numExchange;
            empty = empty % numExchange;
            sold += full;
            empty = empty + full;
        }
        return sold;
    }
};