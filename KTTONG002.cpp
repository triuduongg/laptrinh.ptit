#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
using namespace std;

int t;
ll l, r;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> l >> r;
    ll ssh=r-l+1;
    cout<<(l+r)*ssh/2<<'\n';
  }
return 0;
}