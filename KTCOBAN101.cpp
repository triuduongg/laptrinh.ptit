#include <bits/stdc++.h>
using namespace std;

int cnt[15];

int main(){
    int t; cin >> t;
    while(t--){
        memset(cnt, 0, sizeof(cnt));
        int a, b; cin >> a >> b;
        if(a > b) swap(a, b); 
        for(int i = a; i <= b; i++){
            int x = i;
            while(x > 0){
                cnt[x % 10]++;
                x /= 10;
            }
        }
		if(a == 0){
			cnt[0]++;
		}
        for(int i = 0; i <= 9; i++){
            cout << cnt[i];
            if(i < 9) cout << ' ';
        }
        cout << endl;
     }
}