class Solution {
  public:
    int subarrayXor(std::vector<int>& arr) {
        int n = arr.size();

        // If the size of the array is even, all elements appear an even number of times.
        if (n % 2 == 0) {
            return 0;
        }

        // If the size is odd, only elements at even indices appear an odd number of times.
        int xorSum = 0;
        for (int i = 0; i < n; i += 2) {
            xorSum ^= arr[i];
        }

        return xorSum;
    }
};
