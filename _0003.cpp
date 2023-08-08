// Tính chu vi và diện tích hình chữ nhật

#include <iostream>

using namespace std;

int main() {
    int a, b, cv, dt;
    cin >> a >> b;
    cv = (a + b) * 2;
    dt = a * b;
    cout << cv << " " << dt;
    return 0;
}