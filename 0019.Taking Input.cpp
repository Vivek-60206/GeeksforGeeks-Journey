#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    float f;
    int ff; // To Store floor of float variable f

    // code here
    // 1. Read the full line for string s (can contain spaces)
        getline(cin, s);

        // 2. Read the integer n
        cin >> n;

        // 3. Read the float f
        cin >> f;

        // 4. Calculate the floor value using type casting
        ff = (int)f;

    cout << s << endl;
    cout << n << endl;
    cout << ff << endl;
    return 0;
}
