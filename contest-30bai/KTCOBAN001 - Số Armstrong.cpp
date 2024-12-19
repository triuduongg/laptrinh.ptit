#include <bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt = 0;
    while(n>0){
        ++cnt;
        n/=10;
    }
    return cnt;
}
int ArmStrong(long long n){
    int sum = 0;
    int tmp = n;
    int d = count(n); // so chu so cua n
    while(n>0){
        sum += (int)pow(n%10,d);
        n/=10;
    }
    return sum == tmp;
}
int main() {
int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (ArmStrong(n)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl; 
        }
    }

    return 0;
}