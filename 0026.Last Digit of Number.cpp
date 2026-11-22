#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // std::abs handles negative integers
    cout << abs(n % 10);

    return 0;
}
