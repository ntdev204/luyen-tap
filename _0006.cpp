/*
Viết chương trình tính chu vi (cv) và diện tích (s) một tam giác có 3 cạnh a, b, c là các số nguyên theo công thức 
cv=a+b+c, s=sqrt(p*(p-a)*(p-b)*(p-c)) với p=cv/2 (3 số a, b, c bảo đảm là 3 cạnh của 1 tam giác).
*/ 

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    float cv = a + b + c;
    float p = cv / 2.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(1) << cv << " " << fixed << setprecision(3) << s;
    return 0;
}