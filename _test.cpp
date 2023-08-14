// Cho một số nguyên có 3 chữ số. In ra 2 chữ số cuối và 2 chữ số đầu của số vừa nhập.

#include <iostream>
#include <vector>

using namespace std;

void tachSo(vector<char> &vt, int *n) {
    int temp;
    do {
        vt.push_back(*n % 10);
        *n /= 10;
    } while (*n > 0);
}

int main() {
    vector<char> vt;
    int n;
    cin >> n;
    tachSo(vt, &n);
    for (int i = 0; i < vt.size(); i++) {
    cout << vt[i] << " ";
  }

    return 0;
}