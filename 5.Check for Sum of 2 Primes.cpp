class Solution {
private:
    bool isPrime(int x) {
        if (x <= 1) return false;
        if (x <= 3) return true;
        if (x % 2 == 0 || x % 3 == 0) return false;

        for (int i = 5; i * i <= x; i += 6) {
            if (x % i == 0 || x % (i + 2) == 0)
                return false;
        }
        return true;
    }

public:
    bool isSumOfTwo(int n) {
        // Less than 4 cannot be represented as the sum of two primes
        if (n <= 3) return false;

        // Every even number > 2 is the sum of two primes (Goldbach's Conjecture)
        if (n % 2 == 0) return true;

        // Odd numbers must be 2 + (n - 2)
        return isPrime(n - 2);
    }
};
