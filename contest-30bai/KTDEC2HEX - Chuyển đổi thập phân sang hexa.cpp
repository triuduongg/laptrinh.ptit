#include <iostream>
#include <iomanip> // Để sử dụng std::hex
using namespace std;

int main() {
    int t;
    cin >> t; // Số lượng test cases

    while (t--) {
        long long n;
        cin >> n; // Đọc số nguyên n trong hệ thập phân
        cout << hex << uppercase << n << endl; // Chuyển sang hệ hexa và in ra kết quả
    }

    return 0;
}
/*Giải thích chi tiết:
#include <iostream>: Thư viện để xử lý đầu vào/đầu ra.
#include <iomanip>: Thư viện cần thiết để sử dụng std::hex và std::uppercase.
cin >> t;: Đọc vào số lượng test cases t.
cin >> n;: Đọc vào số nguyên n từ hệ thập phân.
cout << hex << uppercase << n << endl;:
std::hex giúp chuyển đổi số sang hệ cơ số 16 (hexa).
std::uppercase đảm bảo các chữ cái từ A-F sẽ được in in hoa.
endl dùng để xuống dòng sau mỗi kết quả.
Vòng lặp while (t--): Thực hiện lần lượt cho từng test case.*/
