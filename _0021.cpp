#include <iostream>

using namespace std;

int taxi(int n) {
    int t = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) t = t + 12000;
        else if (i >= 2 && i <= 30) t = t + 10000;
        else if (i >= 31) t = t + 9000;
    }
    return t;
}

int main() {
    int n;
    cin >> n;
    cout << taxi(n);
    return 0;
}