#include <iostream>

using namespace std;

int soNut(int n) {
    int result = 0;
    do {
        result += n % 10;
        n /= 10;
    } while (n > 0);
    if (result > 10) return result % 10;
    else if (result == 10) return 0;
    return result;
}

int main() {
    int bsx;
    cin >> bsx;
    cout << soNut(bsx) << endl;
    if (soNut(bsx) == 9) cout << "may man";
    else cout << "chua may man";
    return 0;
}