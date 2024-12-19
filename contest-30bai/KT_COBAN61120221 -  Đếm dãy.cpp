#include <iostream>
using namespace std;

const int MOD = 123456789;

// Hàm tính số cách phân tích n thành tổng các số nguyên dương
long long tinh_dang(int n) {
    long long dp[n + 1];  // Mảng dp lưu số cách phân tích cho từng số i
    dp[0] = 1;  // Khởi tạo dp[0] = 1 (1 cách phân tích số 0)
    
    // Lặp qua tất cả các số từ 1 đến n
    for (int i = 1; i <= n; i++) {
        dp[i] = 0;
        // Tính dp[i] bằng cách cộng tất cả dp[i-j] với j từ 1 đến i
        for (int j = 1; j <= i; j++) {
            dp[i] += dp[i - j];  // Cộng các cách phân tích số i
            dp[i] %= MOD;  // Lấy số dư sau khi cộng để tránh tràn số
        }
    }

    return dp[n];  // Trả về số cách phân tích n
}

int main() {
    int t;  // Số lượng testcase
    cin >> t;
    
    while (t--) {
        int n;  // Nhập vào số n cần tính
        cin >> n;
        cout << tinh_dang(n) << endl;  // In kết quả cho mỗi bộ dữ liệu
    }
    
    return 0;
}
