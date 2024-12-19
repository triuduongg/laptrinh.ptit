#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Hàm mũ nhanh
long long muNhan(long long a, long long n, int mod) {
    long long res = 1;
    a = a % mod;  // Đảm bảo a không lớn hơn mod
    while (n > 0) {
        if (n % 2 == 1) {  // Nếu n là lẻ
            res = (res * a) % mod;
        }
        a = (a * a) % mod;  // Tính a^2 % mod
        n /= 2;  // Chia đôi n
    }
    return res;
}

int main() {
    int t;
    cin >> t;  // Đọc số lượng test case
    
    while (t--) {
        long long a, n;
        cin >> a >> n;  // Đọc a và n
        
        // Tính a^n % (10^9 + 7)
        long long result = muNhan(a, n, MOD);
        
        cout << result << endl;  // In kết quả
    }
    
    return 0;
}
