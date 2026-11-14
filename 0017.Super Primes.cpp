#include <vector>

class Solution {
  public:
    std::vector<int> superPrimes(int n) {
        if (n < 3) return {};

        // Sieve of Eratosthenes up to n
        std::vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int p = 2; p * p <= n; ++p) {
            if (isPrime[p]) {
                for (int i = p * p; i <= n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        std::vector<int> primes;
        std::vector<int> result;

        // Collect primes and identify super-primes
        for (int i = 2; i <= n; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
                int position = primes.size(); // 1-based position

                // If the position itself is prime, it's a super-prime
                if (isPrime[position]) {
                    result.push_back(i);
                }
            }
        }

        return result;
    }
};
