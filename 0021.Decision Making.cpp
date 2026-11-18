#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << "less";
    } else if (n == m) {
        cout << "equal";
    } else {
        cout << "greater";
    }

    return 0;
}
