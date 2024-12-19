#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Hàm kiểm tra độ dài chuỗi con sắp xếp theo thứ tự từ điển
int timChieuDaiXauCon(string s) {
    // Sắp xếp chuỗi theo thứ tự từ điển
    sort(s.begin(), s.end());

    // Loại bỏ các ký tự trùng nhau
    string xauCon = "";
    for (int i = 0; i < s.length(); i++) {
        if (xauCon.find(s[i]) == string::npos) {
            xauCon += s[i];
        }
    }

    // Trả về độ dài chuỗi con có các ký tự khác nhau
    return xauCon.length();
}

int main() {
    int t;  // Số lượng test case
    cin >> t;

    while (t--) {
        string chuoi;
        cin >> chuoi;

        int ketQua = timChieuDaiXauCon(chuoi);
        cout << ketQua << endl;
    }

    return 0;
}
