// Viết chương trình tính trung bình cộng của 3 số nguyên a, b, c theo công thức TBC=(a + b + c) / 3

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    float TBC = (a + b + c) / 3.0;
    cout << fixed << setprecision(1) << TBC;
    return 0;
}