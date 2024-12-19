#include <iostream>
#include <cmath>
#include <map>
using namespace std;

// Hàm kiểm tra và phân tích n thành các thừa số nguyên tố
map<long long, int> phanTichThuaSo(long long n) {
    map<long long, int> primeFactors;

    // Kiểm tra số 2 trước
    while (n % 2 == 0) {
        primeFactors[2]++;
        n /= 2;
    }

    // Kiểm tra các số lẻ từ 3 đến sqrt(n)
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            primeFactors[i]++;
            n /= i;
        }
    }

    // Nếu n là một số nguyên tố lớn hơn 2
    if (n > 2) {
        primeFactors[n]++;
    }

    return primeFactors;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // Lấy các thừa số nguyên tố của n
        map<long long, int> factors = phanTichThuaSo(n);

        // Tìm nguyên tố có lũy thừa lớn nhất
        long long maxPrime = 0;
        int maxExp = 0;

        for (auto& factor : factors) {
            if (factor.second > maxExp) {
                maxExp = factor.second;
                maxPrime = factor.first;
            }
        }

        // In kết quả
        cout << maxPrime << " " << maxExp << endl;
    }

    return 0;
}
