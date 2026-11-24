#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;

    // Formula for nth term of an A.P.: a + (n - 1) * d
    cout << a + (n - 1) * d << endl;

    return 0;
}
