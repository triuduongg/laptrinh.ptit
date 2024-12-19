#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> vt1(n);
		vector<int> vt2(n);
		for(int i = 0 ; i < n; i++){
			cin >> vt1[i];
		}

		for(int i = 0 ; i < n; i++){
			cin >> vt2[i];
		}
		if(vt1 > vt2) swap(vt1, vt2);
		ll cnt = 0;

		while(vt1 != vt2){
			cnt++;
			next_permutation(vt1.begin(), vt1.end());
		}
		cout << cnt << endl;
	}
	return 0;
}