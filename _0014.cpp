#include <iostream>
#include <string>

using namespace std;

string kiemTra(int *t) {
    if (0 < *t && *t <= 11) return "Thieu nhi";
    else if (11 < *t && *t <= 25) return "Thieu nien";
    else if (25 < *t && *t <= 50) return "Trung nien";
    else if (*t > 50) return "Lao nien";
    return 0;
}

int main() {
    int t;
    cin >> t;
    cout << kiemTra(&t);
    return 0;
}