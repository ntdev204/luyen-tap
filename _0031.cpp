#include <iostream>

using namespace std;

int main() {
    int m, n, count = 0;
    do {
        cin >> m >> n;
    } while (m >= n);
    for (int i = m; i < n; i++) {
        if (i % 3 == 0) count++;
    }
    cout << count;
    return 0;
}