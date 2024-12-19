#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void demCachBieuDien(int N) {
    vector<int> dp(N + 1, 0);
    dp[0] = 1; // Có 1 cách biểu diễn 0 là không chọn số nào

    // Duyệt qua các số chính phương nhỏ hơn hoặc bằng N
    for (int i = 1; i * i <= N; ++i) {
        int p = i * i; // p là số chính phương
        for (int j = p; j <= N; ++j) {
            dp[j] += dp[j - p];
        }
    }

    cout << dp[N] << endl;
}

int main() {
    int t; // Số lượng testcase
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        demCachBieuDien(N);
    }

    return 0;
}
