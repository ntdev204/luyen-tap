#include <iostream>

using namespace std;

int main() {
    int n;
    do {
        cin >> n;
    } while (n > 1000000 || n % 1000 != 0);
    int s5 = n / 5000;
    int s2 = (n % 5000) / 2000;
    int s1 = ((n % 5000) % 2000) / 1000;
    cout << s5 << " " << s2 << " " << s1;
    return 0;
}