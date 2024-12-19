#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void cong(string x, string y){
    int n = x.size();
    int res[n];
    int a[n] = {0};
    int b[n] = {0};
    for(int i = 0; i < n; i++){
        a[i] = x[i] - '0';
    }
    for(int i = 0; i < y.size(); i++){
        b[i] = y[i] - '0';
    }
    reverse(a, a + n);
    reverse(b, b + y.size());
    int q, r = 0;
    for(int i = 0; i < n; i++){
        q = a[i] + b[i] + r;
        res[i] = q % 10;
        r = q/10;
    }
    if(r > 0) cout << r;
    for(int i = n - 1; i >= 0; i--){
        cout << res[i];
    }
}

 void nhan(string x, string y){
    int n = x.size();
    int m = y.size();
    int res[n + m] = {0};
    int a[n] = {0};
    int b[n] = {0};
    for(int i = 0; i < n; i++){
        a[i] = x[i] - '0';
    }
    for(int i = 0; i < n; i++){
        b[i] = y[i] - '0';
    }
    reverse(a, a + n);
    reverse(b, b + y.size());

    int q;
    for(int i = 0; i < m; i++){
        int r = 0;
        for(int j = 0; j < n; j++){
            q = b[i]*a[j] + r + res[i+j];
            res[i+j] = q % 10;
            r = q/10;
        }
        if(r != 0) res[i+n] = r;
    }
    int i = n + m - 1;
    while(res[i] == 0) i--;
    for(i ; i >= 0; i--){
        cout << res[i];
    }
 }

int main(){
    int t;
    cin >> t;
    while(t--){
        string x, dau, y;
        cin >> x >> dau >> y;
        if(x.size() < y.size()) swap(x, y);
        if(dau == "+"){
            cong(x,y);
        }
        else{
            if(x == "0" || y == "0"){
                cout << 0;
            }
            else nhan(x,y);
        }
        cout << endl;
    }
    return 0;
}