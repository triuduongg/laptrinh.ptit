#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int t;
ll n;
bool check(ll n){
  if(n==0 || n==1) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(int i=3; i<=sqrt(n); i+=2) if(n%i==0) return 0;
  return 1;
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> n;
    for(ll i=n; i<=10*n; ++i) if(i%2!=0) if(check(i-2)==1 && check(i)==1) {cout<<i<<'\n'; break;}
  }

return 0;
}