#include <iostream>
#include <string>
using namespace std;

const long long MOD = 1e9 + 7;

// Hàm tính lũy thừa nhanh a^b % MOD
long long luyThuaNhanh(long long a, long long b, long long mod) {
    long long ketQua = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) ketQua = (ketQua * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return ketQua;
}

// Hàm tính số lớn mod với m
long long tinhDu(string so, long long m) {
    long long ketQua = 0;
    for (char chuSo : so) {
        ketQua = (ketQua * 10 + (chuSo - '0')) % m;
    }
    return ketQua;
}

int main() {
    int soTest;
    cin >> soTest;
    while (soTest--) {
        string a, b;
        cin >> a >> b;

        long long a_mod = tinhDu(a, MOD);
        long long b_mod = tinhDu(b, MOD - 1);

        cout << luyThuaNhanh(a_mod, b_mod, MOD) << endl;
    }
    return 0;
}
