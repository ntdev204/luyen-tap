#include <iostream>

using namespace std;

int tienDien(int n) {
    int t = 0;
    if (n <= 50) t = n * 600;
    else if (n <= 100) t = 50 * 600 + (n - 50) * 800;
    else if (n <= 200) t = 50 * 600 + 50 * 800 + (n - 100) * 1100;
    else t = 50 * 600 + 50 * 800 + 100 * 1100 + (n - 200) * 1500;
    return t;
}

int main() {
    int n;
    cin >> n;
    cout << tienDien(n);
    return 0;
}