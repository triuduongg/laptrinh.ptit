#include <iostream>
#include <string>
using namespace std;

const int MOD = 1e9 + 7;
const int MOD_MINUS_1 = 1e9 + 6;

// Hàm tính mũ nhanh (Exponentiation by Squaring)
long long muNhan(long long a, long long b, int mod) {
    long long res = 1;
    a = a % mod;  // Đảm bảo a không lớn hơn mod
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

// Hàm tính b % (m - 1)
long long tinhModB(string b, int mod_minus_1) {
    long long result = 0;
    for (char digit : b) {
        result = (result * 10 + (digit - '0')) % mod_minus_1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;  // Đọc số lượng test case
    
    while (t--) {
        string a_str, b_str;
        cin >> a_str >> b_str;  // Đọc a và b dưới dạng chuỗi
        
        // Tính a % MOD
        long long a = 0;
        for (char digit : a_str) {
            a = (a * 10 + (digit - '0')) % MOD;
        }
        
        // Tính b % (MOD-1)
        long long b_mod = tinhModB(b_str, MOD_MINUS_1);
        
        // Tính a^b % MOD
        long long result = muNhan(a, b_mod, MOD);
        
        cout << result << endl;  // In kết quả
    }
    
    return 0;
}
