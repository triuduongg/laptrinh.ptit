#include <iostream>
#include <vector>
using namespace std;

// Hàm đệ quy đếm số cách biểu diễn
int demCach(int m, int n, int soHienTai) {
    // Điều kiện dừng
    if (m == 0) {
        return 1; // Nếu m = 0, có một cách duy nhất (không chọn số nào nữa)
    }
    if (m < 0) {
        return 0; // Nếu m nhỏ hơn 0, không có cách nào hợp lệ
    }

    int count = 0;

    // Duyệt qua các lũy thừa của số từ soHienTai trở lên
    for (int i = soHienTai; i * i <= m; i++) {
        // Tính lũy thừa bậc n của i
        int luuThua = 1;
        for (int j = 1; j <= n; j++) {
            luuThua *= i;
        }
        
        // Gọi đệ quy với m giảm đi luuThua
        count += demCach(m - luuThua, n, i + 1);
    }

    return count;
}

int main() {
    int t;
    cin >> t; // Nhập số lượng test case

    while (t--) {
        int m, n;
        cin >> m >> n; // Nhập m và n cho mỗi test case

        // Gọi hàm đệ quy và in kết quả
        cout << demCach(m, n, 1) << endl;
    }

    return 0;
}
