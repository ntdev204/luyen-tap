// Viết chương trình tính bán kính R của đường tròn ngoại tiếp tam giác có ba cạnh a,b,c là các số nguyên.

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
    do {
        cin >> a >> b >> c;
    } while (ktTamGiac(&a, &b, &c) != 1);
    float p = (a + b + c) / 2.0;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    float R = (a * b * c) / (4 * S);
    cout << fixed << setprecision(3) << R;
    return 0;
}