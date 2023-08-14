/*
Viết chương trình nhập vào số học sinh của 1 lớp (HS) và số táo trong rổ (T).
Hãy chia đều số táo cho tất cả học sinh trong lớp, mỗi bạn sẽ được bao nhiêu quả táo? Còn dư lại bao nhiêu quả?
*/

#include <iostream>

using namespace std;

int main() {
    int T, HS;
    cin >> T >> HS;
    int c = T / HS, d = T % HS;
    cout << c << " " << d;
    return 0;
}