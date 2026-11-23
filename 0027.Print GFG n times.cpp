class Solution {
  public:
    void printGfg(int n) {
        // Base case: stop when n reaches 0
        if (n <= 0) {
            return;
        }

        // Print "GFG "
        cout << "GFG ";

        // Recursive call for remaining (n - 1) times
        printGfg(n - 1);
    }
};
