#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float TBHKI, TBHKII;
    cin >> TBHKI >> TBHKII;
    float TBCN = (TBHKI + TBHKII * 2.0) / 3.0;
    cout << fixed << setprecision(1) << TBCN << endl;
    if (TBCN >= 8) cout << "Gioi";
    else if (TBCN >= 6.5 && TBCN < 8) cout << "Kha";
    else if (TBCN >= 5 && TBCN < 6.5) cout << "Trung binh";
    else if (TBCN >= 3.5 && TBCN < 5) cout << "Yeu";
    else if (TBCN < 3.5) cout << "Kem";
    return 0;
}