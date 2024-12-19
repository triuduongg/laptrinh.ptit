#include <iostream>
using namespace std;

typedef unsigned long long ULL;

// Hàm tính S(n, k) = n! / (n - k)!
ULL tinhS(long long n, long long k) {
    ULL result = 1;
    // Tính tích từ n đến (n-k+1)
    for (int i = 0; i < k; ++i) {
        result *= (n - i);  // Nhân n, n-1, n-2, ..., n-k+1
    }
    return result;
}

int main() {
    int t;
    cin >> t; // Số lượng test case

    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k == 0) {
            cout << 1 << endl;  // Trường hợp k = 0, S(n, 0) = 1
        } else {
            cout << tinhS(n, k) << endl; // In kết quả cho mỗi testcase
        }
    }

    return 0;
}
