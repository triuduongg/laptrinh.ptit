#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int n;
ll a[1000005];
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin >>t;
  while(t--){
      cin >> n;
      f(i,1,n) cin >> a[i];
      ll x=a[2]-a[1];
      int c=0;
      f(i,2,n-1){
        if((a[i+1]-a[i])!=x){c=1; break;}
      }
    if(c==0) cout<<"YES";
    else cout<<"NO";
    cout <<'\n';
  }
return 0;
}