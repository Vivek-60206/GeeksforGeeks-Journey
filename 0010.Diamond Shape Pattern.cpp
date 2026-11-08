class Solution {
  public:
    void printDiamond(int n) {
        // Upper half (rows 1 to n)
        for (int i = 1; i <= n; i++) {
            // Print leading spaces: (n - i)
            for (int s = 0; s < n - i; s++) {
                cout << " ";
            }
            // Print stars with trailing space: i times
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << "\n";
        }

        // Lower half (rows n down to 1)
        for (int i = n; i >= 1; i--) {
            // Print leading spaces: (n - i)
            for (int s = 0; s < n - i; s++) {
                cout << " ";
            }
            // Print stars with trailing space: i times
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
    }
};
