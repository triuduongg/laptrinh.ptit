#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int t, n, a[15][15], ans, check[15][15];
void mark(int x, int y, int key){
  f(j,1,n) check[x][j]+=key, check[j][y]+=key;
  int z=1;
  while(x+z<=n && y+z<=n) check[x+z][y+z]+=key, z++;
  z=1;
  while(x+z<=n && y-z>=1) check[x+z][y-z]+=key, z++;
  z=1;
  while(x-z>=1 && y+z<=n) check[x-z][y+z]+=key, z++;
  z=1;
  while(x-z>=1 && y-z>=1) check[x-z][y-z]+=key, z++;
}
void Try(int k){
  if(k==n+1) ans++;
  else{
    for(int i=1; i<=n; ++i){
      if(check[k][i]==0){
        mark(k,i,1);
        Try(k+1);
        mark(k,i,-1);
      }
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> n;
    f(i,1,n)f(j,1,n) a[i][j]=0;
    ans=0;
    Try(1);
    cout<<ans<<'\n';
  }
return 0;
}