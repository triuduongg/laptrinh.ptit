#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string s;
    ll cnt = 0;
    while(cin >> s){
        cnt +=  s.size();
    }
    cout << cnt << endl;
    return 0;
}