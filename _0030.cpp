#include <iostream>

using namespace std;

int main() {
    int m, n;
    do {
        cin >> m >> n;
    } while (m > n);
    int sum = 0;
    for (int i = m; i <= n; i++) sum += i;
    cout << sum;
    return 0;
}