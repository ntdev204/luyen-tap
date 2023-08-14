#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 10;
    int b = n % 100;

    cout << a << " ";
    if (b < 10) {
        cout << "0";
    }
    cout << b;

    return 0;
}