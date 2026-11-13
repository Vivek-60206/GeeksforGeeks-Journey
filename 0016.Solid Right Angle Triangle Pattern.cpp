class Solution {
  public:
    void printPattern(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << "* ";
            }
            std::cout << "\n";
        }
    }
};
