// Tính chu vi và diện tích hình tròn

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float r, cv, dt;
    cin >> r;
    cv = r * 2 * 3.14;
    dt = r * r * 3.14;
    cout << fixed << setprecision(2) << cv << " " << dt;
    return 0;
}