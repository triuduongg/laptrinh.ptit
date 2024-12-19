#include <iostream>
#include <vector>
using namespace std;

// Hàm tính số cách biểu diễn n bằng tổng các lũy thừa của m
int demCachBieuDien(int n, int m) {
    // Tạo mảng dp với kích thước n+1
    vector<int> dp(n + 1, 0);
    
    // Có một cách để biểu diễn số 0, đó là không chọn số nào
    dp[0] = 1;

    // Tạo danh sách các lũy thừa của m
    vector<int> powers;
    int power = 1;
    while (power <= n) {
        powers.push_back(power);
        power *= m;
    }

    // Duyệt qua từng lũy thừa của m và cập nhật mảng dp
    for (int p : powers) {
        for (int i = p; i <= n; ++i) {
            dp[i] += dp[i - p];
        }
    }

    // dp[n] chứa số cách biểu diễn n thành tổng các lũy thừa của m
    return dp[n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        // Tính số cách biểu diễn n thành tổng các lũy thừa của m
        cout << demCachBieuDien(n, m) << endl;
    }

    return 0;
}
