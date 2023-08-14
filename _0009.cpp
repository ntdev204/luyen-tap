/*
Viết chương trình nhập vào điểm Toán, Văn, Anh văn của 1 học sinh là các số thực.
Tính trung bình của học sinh đó, biết rằng điểm Toán, Văn là hệ số 2.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float toan, van, anh;
    cin >> toan >> van >> anh;
    float TBC = (toan * 2 + van * 2 + anh) / 5.0;
    cout << fixed << setprecision(1) << TBC;
    return 0;
}