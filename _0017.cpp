#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    if (t == 2 || t == 3 || t == 4) cout << "Mua Xuan";
    else if (t == 5 || t == 6 || t == 7) cout << "Mua Ha";
    else if (t == 8 || t == 9 || t == 10) cout << "Mua Thu";
    else if (t == 11 || t == 12 || t == 1) cout << "Mua Dong";
    return 0;
}