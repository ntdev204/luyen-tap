#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll soNT(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n, count = 0;
    do {
        cin >> m >> n;
    } while (m >= n);
    for (int i = m; i <= n; i++) {
        if (soNT(i) == 1) {
            cout << i << " ";
            count++;
        }
    }
    if (count == 0) cout << "-";
    return 0;
}