#include <iostream>

using namespace std;

// Hàm đ? t?m giá tr? l?n nh?t gi?a hai s?
int myMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int t;
    cin >> t; // S? lư?ng testcase

    while (t--) {
        int m, n;
        cin >> m >> n; // Kích thư?c b?ng

        // Khai báo m?ng t?nh
        int A[100][100]; // T?i đa 100x100
        int dp[100][100]; // T?i đa 100x100

        // Nh?p b?ng
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        // Đi?n c?t đ?u tiên
        for (int i = 0; i < m; i++) {
            dp[i][0] = A[i][0];
        }

        // C?p nh?t các ô
        for (int j = 1; j < n; j++) {
            for (int i = 0; i < m; i++) {
                // Tính giá tr? dp[i][j]
                int max_prev = dp[i][j - 1]; // T? trái
                if (i > 0) {
                    max_prev = myMax(max_prev, dp[i - 1][j - 1]); // T? trên
                }
                if (i < m - 1) {
                    max_prev = myMax(max_prev, dp[i + 1][j - 1]); // T? dư?i
                }
                dp[i][j] = A[i][j] + max_prev; // C?ng thêm giá tr? hi?n t?i
            }
        }

        // T?m giá tr? t?i đa ? c?t cu?i cùng
        int result = dp[0][n - 1];
        for (int i = 1; i < m; i++) {
            result = myMax(result, dp[i][n - 1]);
        }

        cout << result << endl; // In ra k?t qu?
    }

    return 0;
}