#include <bits/stdc++.h>
using namespace std;

bool ktra(long long p, long long n)
{
    long long temp = p, count = 0, f = 5;
    while (f <= temp)  // Kiểm tra số lượng chữ số 0 ở cuối của p!
    {
        count += temp / f;  // Thêm số lượng các số chia hết cho f
        f *= 5;  // Tiến đến các bội số lớn hơn của 5
    }
    return (count >= n);  // Kiểm tra xem số chữ số 0 có đủ n không
}

long long tim(long long n)
{
    if (n == 1)  // Nếu n = 1 thì 5! có đúng 1 chữ số 0 ở cuối
        return 5;

    long long low = 0;
    long long high = 5 * n;  // Giới hạn ban đầu của tìm kiếm nhị phân
    while (low < high)  // Tìm kiếm nhị phân để tìm m nhỏ nhất
    {
        long long mid = (low + high) >> 1;
        if (ktra(mid, n))  // Kiểm tra số chữ số 0 của mid!
            high = mid;  // Nếu mid! có ít nhất n chữ số 0, tiếp tục tìm về phía trái
        else
            low = mid + 1;  // Nếu mid! có ít hơn n chữ số 0, tìm về phía phải
    }
    return low;  // Trả về giá trị m nhỏ nhất sao cho m! có đúng n chữ số 0
}

int main()
{
    int test;
    cin >> test;  // Số lượng testcase
    while (test--)  // Duyệt qua tất cả các testcase
    {
        long long n;
        cin >> n;  // Đọc giá trị n
        cout << tim(n) << endl;  // In kết quả cho mỗi testcase
    }
    return 0;
}
