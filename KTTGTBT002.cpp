#include<bits/stdc++.h>
using namespace std;

float x;
int n;
int main(){
    int t;
    cin >> t;
    while(t--){
       cin >> n >> x;
       float tmp=1, hiep=1, s=0;
       for(int i=1; i<=n; ++i){
         tmp*=x;
         hiep*=i;
         s+=tmp/hiep;
       }
       cout<<fixed<<setprecision(3)<<s<<'\n';
    }
    return 0;
}