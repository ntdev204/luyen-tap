// Viết chương trình tính tổng và tích 2 số nguyên a và b

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a_str, b_str;
    cin >> a_str >> b_str;
    int a = stoi(a_str);
    int b = stoi(b_str);

    int total = a + b;
    int product = a * b;

    cout << total << " " << product << endl;

    return 0;
}