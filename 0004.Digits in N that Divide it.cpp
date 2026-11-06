class Solution {
public:
    int divisibleByDigits(string &s) {
        // Frequency array for digits '1' through '9'
        vector<int> count(10, 0);
        for (char c : s) {
            count[c - '0']++;
        }

        int totalDivisibleDigits = 0;

        // Check divisibility for each present digit from 1 to 9
        for (int d = 1; d <= 9; ++d) {
            if (count[d] == 0) continue;

            // Compute s % d using Horner's rule
            int remainder = 0;
            for (char c : s) {
                remainder = (remainder * 10 + (c - '0')) % d;
            }

            if (remainder == 0) {
                totalDivisibleDigits += count[d];
            }
        }

        return totalDivisibleDigits;
    }
};
