// Last updated: 26/07/2026, 22:03:38
class Solution {
public:
    long long mod = 1e9 + 7;

    long long power(long long base, long long exp) {
        if (exp == 0) return 1;

        long long half = power(base, exp / 2);

        long long result = (half * half) % mod;

        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }

        return result;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long part1 = power(5, even);
        long long part2 = power(4, odd);

        return (part1 * part2) % mod;
    }
};