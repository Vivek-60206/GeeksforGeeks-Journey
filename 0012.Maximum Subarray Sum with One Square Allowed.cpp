class Solution {
public:
    int maximumSubarray(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        // Initialize state with the first element
        int no_sq = arr[0];
        int with_sq = arr[0] * arr[0];
        int max_sum = max(no_sq, with_sq);

        for (int i = 1; i < n; i++) {
            int x = arr[i];
            int x2 = x * x;

            // Transition for with_sq:
            // 1. Square current element alone: x2
            // 2. Square current element and attach to valid no_sq prefix: no_sq + x2
            // 3. Keep previously squared element and attach current element normally: with_sq + x
            int next_with_sq = max({x2, no_sq + x2, with_sq + x});

            // Standard Kadane transition for no_sq
            int next_no_sq = max(x, no_sq + x);

            no_sq = next_no_sq;
            with_sq = next_with_sq;

            max_sum = max({max_sum, no_sq, with_sq});
        }

        return max_sum;
    }
};
