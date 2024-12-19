#include <iostream>
using namespace std;

// Hàm tính số lượng chữ số 0 ở cuối m!
int dem_so_0(int m) {
    int count = 0;
    // Mỗi lần m chia hết cho 5 thì có thêm một chữ số 0 ở cuối
    while (m >= 5) {
        count += m / 5;  // Số lần chia m cho 5
        m /= 5;           // Chia m cho 5 và tiếp tục
    }
    return count;
}

int main() {
    int t; // Số lượng testcase
    cin >> t;
    
    while (t--) {
        int n;  // Số lượng chữ số 0 cần tìm
        cin >> n;
        
        int m = 0;
        // Tìm m sao cho giai thừa m! có đúng n chữ số 0
        while (true) {
            m++;
            if (dem_so_0(m) == n) {
                cout << m << endl;  // In kết quả khi tìm thấy m
                break;
            }
        }
    }
    
    return 0;
}
