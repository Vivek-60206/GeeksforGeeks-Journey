#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
