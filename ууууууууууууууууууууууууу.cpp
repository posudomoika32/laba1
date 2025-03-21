#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if (abs(a - b) > 1 || (a == 0 && b > 1) || (b == 0 && a > 1) || (b == 0 && a == 0)) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}
