#include <iostream>
#include <vector>
using namespace std;

// Mảng lưu trữ chiều dài của các dãy Fibonacci
vector<long long> fib_length(93, 0);

void solve(int N, int i) {
    if (N == 1) {
        cout << "A" << endl;  // G(1) = "A"
        return;
    }
    if (N == 2) {
        cout << "B" << endl;  // G(2) = "B"
        return;
    }

    // Nếu i nằm trong G(N-2)
    if (i <= fib_length[N - 2]) {
        solve(N - 2, i);  // Tiếp tục tìm trong G(N-2)
    } else {
        // Nếu i nằm trong G(N-1), điều chỉnh i và tìm trong G(N-1)
        solve(N - 1, i - fib_length[N - 2]);
    }
}

int main() {
    // Tính trước chiều dài của các dãy Fibonacci
    fib_length[1] = 1;
    fib_length[2] = 1;
    for (int n = 3; n <= 92; ++n) {
        fib_length[n] = fib_length[n - 2] + fib_length[n - 1];
    }

    int T;  // Số bộ test
    cin >> T;

    while (T--) {
        int N, i;
        cin >> N >> i;
        solve(N, i);
    }

    return 0;
}
