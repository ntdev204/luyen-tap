#include <iostream>

using namespace std;

int main() {
    int m, n, sum = 0, count = 0;
    do {
        cin >> m >> n;
    } while (m >= n);
    for (int i = m; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) count++;
        if (i % 2 == 0) sum += i;
    }
    cout << count << " " << sum;
    return 0;
}