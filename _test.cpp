// Viết chương trình tính bán kính R của đường tròn ngoại tiếp tam giác có ba cạnh a,b,c là các số nguyên.

#include <iostream>

using namespace std;

int ktTamGiac(int *a, int *b, int *c) {
    if ((*a + *b) <= *c) return 0;
    else if ((*b + *c) <= *a) return 0;
    else if ((*a + *c) <= *b) return 0;
    return 1;
}

int main() {
    int a, b, c;
    do {
        cin >> a >> b >> c;
    } while (ktTamGiac(&a, &b, &c));
    cout << ktTamGiac(&a, &b, &c);
    return 0;
}