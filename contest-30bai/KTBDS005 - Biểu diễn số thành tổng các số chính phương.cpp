#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void demCachBieuDien(int N) {
    vector<int> dp(N + 1, 0); // Mảng dp lưu số cách biểu diễn
    dp[0] = 1; // Có 1 cách để biểu diễn số 0 là không chọn số nào

    // Duyệt qua tất cả các số chính phương nhỏ hơn hoặc bằng N
    for (int i = 1; i * i <= N; ++i) {
        int p = i * i; // p là số chính phương
        // Duyệt từ p đến N để cập nhật dp[j]
        for (int j = p; j <= N; ++j) {
            dp[j] += dp[j - p]; // Cập nhật số cách biểu diễn số j
        }
    }

    // In ra kết quả là số cách biểu diễn N
    cout << dp[N] << endl;
}

int main() {
    int t; // Số lượng testcase
    cin >> t; // Đọc số lượng testcase

    while (t--) { // Duyệt qua từng testcase
        int N;
        cin >> N; // Đọc số N cho mỗi testcase
        demCachBieuDien(N); // Gọi hàm tính số cách biểu diễn N
    }

    return 0;
}
