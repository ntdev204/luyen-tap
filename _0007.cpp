/*
Viết chương trình tính diện tích tam giác có chiều dài cạnh đáy a và chiều cao h tương ứng là các số nguyên theo 
công thức s=a*h/2.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, h;
    cin >> a >> h;
    float s = a * h / 2.0;
    cout << fixed << setprecision(2) << s;
    return 0;
}