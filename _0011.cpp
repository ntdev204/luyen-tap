// Viết chương trình nhập vào tổng số giây là một số nguyên, in ra giờ:phút:giây.

#include <iostream>

using namespace std;

int main() {
    int tong;
    cin >> tong;
    int temp = tong;
    int h = temp / 3600; // Giờ
    temp = temp % 3600;
    int m = temp / 60; // Phút 
    int s = temp % 60; // Giây
    cout << h << ":" << m << ":" << s;
    return 0;
}