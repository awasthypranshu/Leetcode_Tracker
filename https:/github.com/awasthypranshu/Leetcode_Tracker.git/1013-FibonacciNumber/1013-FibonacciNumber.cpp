// Last updated: 26/07/2026, 22:04:21
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int last = fib(n-1);
        int slast = fib(n-2);
        return last + slast;
    }
};