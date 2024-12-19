#include <bits/stdc++.h>
using namespace std;

int ans(int arr[], int n) {
    int dp[10] = {0}; 
    int len = 1;

    for (int i = 0; i < n; i++) {
        int tmp = arr[i], locMax = 1, cnt[10] = {0};
        while (tmp > 0) {
            cnt[tmp % 10] = 1;
            tmp /= 10;
        }
        for (int d = 0; d <= 9; d++) {
            if (cnt[d]) locMax = max(locMax, dp[d] + 1);
        }
        for (int d = 0; d <= 9; d++) {
            if (cnt[d]) dp[d] = locMax;
        }
        len = max(len, locMax); 
    }
    return len;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << ans(arr, n) << endl;
    }
    return 0;
}