#include <iostream>
#include <string>
using namespace std;

int solve(string s) {
    int openCount = 0;  // Đếm số dấu ngoặc mở '(' chưa có cặp đóng
    int changes = 0;    // Đếm số lần cần thay đổi dấu ngoặc

    for (char c : s) {
        if (c == '(') {
            openCount++;  // Dấu ngoặc mở
        } else {  // Dấu ngoặc đóng ')'
            if (openCount > 0) {
                openCount--;  // Nếu có dấu ngoặc mở, kết hợp với nó
            } else {
                changes++;  // Nếu không có dấu ngoặc mở, cần thay đổi dấu đóng thành mở
            }
        }
    }

    // Mỗi dấu ngoặc mở còn lại sẽ cần thay đổi để thành dấu đóng
    changes += openCount / 2;

    return changes;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}
