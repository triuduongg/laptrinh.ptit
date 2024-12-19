#include <iostream>
#include <string>

using namespace std;

// Hàm thay thế các số '3' thành '5' và ngược lại để tính tổng lớn nhất và nhỏ nhất
void xuLySo(int &A, int &B) {
    string sa = to_string(A);
    string sb = to_string(B);

    // Tạo tổng nhỏ nhất: thay 5 thành 3
    for (char &ch : sa) {
        if (ch == '5') {
            ch = '3';
        }
    }
    for (char &ch : sb) {
        if (ch == '5') {
            ch = '3';
        }
    }
    int tongNhoNhat = stoi(sa) + stoi(sb);

    // Tạo tổng lớn nhất: thay 3 thành 5
    for (char &ch : sa) {
        if (ch == '3') {
            ch = '5';
        }
    }
    for (char &ch : sb) {
        if (ch == '3') {
            ch = '5';
        }
    }
    int tongLonNhat = stoi(sa) + stoi(sb);

    cout << tongNhoNhat << " " << tongLonNhat << endl;
}

int main() {
    int T;
    cin >> T;  // Đọc số lượng test case

    // Xử lý từng test case
    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;  // Đọc hai số A và B

        xuLySo(A, B);  // Xử lý và in kết quả
    }

    return 0;
}
