#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            count += 1;
        }
    }
    if (count == 0) cout << "-";
    return 0;
}