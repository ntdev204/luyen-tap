#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int ktTamGiac(int *a, int *b, int *c) {
    if ((*a + *b) <= *c || (*b + *c) <= *a || (*a + *c) <= *b) return 0;
    return 1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    float cv = a + b + c;
    float p = cv / 2.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    if (ktTamGiac(&a, &b, &c) == 0) cout << "Day khong phai la 3 canh cua mot tam giac";
    else {
        cout << "Day la 3 canh cua mot tam giac\n";
        cout << fixed << setprecision(2) << cv << " " << fixed << setprecision(1) << s;
    }
    return 0;
}