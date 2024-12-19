#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Hàm cộng n với số cố định 2022 (trong trường hợp n có rất nhiều chữ số)
string addBigNumbers(string n, int m) {
    int carry = m;  // bắt đầu từ m (2022)
    int i = n.size() - 1;
    string result = "";
    
    while (i >= 0 || carry > 0) {
        int digit_n = (i >= 0) ? (n[i] - '0') : 0; // lấy chữ số từ n
        int sum = digit_n + carry;
        result += (sum % 10) + '0';  // lấy chữ số cuối và thêm vào kết quả
        carry = sum / 10;  // lưu lại phần dư để cộng với chữ số tiếp theo
        i--;
    }
    
    // Đảo kết quả lại vì chúng ta cộng từ phải sang trái
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    int t;
    cin >> t;  // Số bộ test
    
    while (t--) {
        string n;
        cin >> n;  // Nhập số nguyên lớn n
        
        // Gọi hàm cộng n với 2022
        string result = addBigNumbers(n, 2022);
        
        cout << result << endl;  // In kết quả
    }
    
    return 0;
}