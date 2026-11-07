class Solution {
    // Helper function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

public:
    int fullPrime(int N) {
        // Step 1: Check if every digit is prime (2, 3, 5, 7)
        int temp = N;
        while (temp > 0) {
            int d = temp % 10;
            if (d != 2 && d != 3 && d != 5 && d != 7) {
                return 0;
            }
            temp /= 10;
        }

        // Step 2: Check if the number N itself is prime
        if (!isPrime(N)) {
            return 0;
        }

        return 1;
    }
};
