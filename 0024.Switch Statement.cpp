#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    switch (n) {
        case 1:
            cout << "Stop" << endl;
            break;
        case 2:
            cout << "Standby" << endl;
            break;
        case 3:
            cout << "Go" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }

    return 0;
}
