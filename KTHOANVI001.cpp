#include <bits/stdc++.h>

using namespace std;

int n, x[105], k, used[105]={};
void Output(){
    for(int i = 1; i <= n; ++i)
         cout << x[i] <<(i<n?" ":"\n");
}
void Try(int i){
    for(int j = 1; j <= n; ++j){
        if(used[j] == 0){
            used[j] = 1;
            x[i] = j;
        }
        else continue;
        if(i == n) Output();
        if(i < n)  Try(i + 1);
        used[j] = 0;

    }
}

int main()
{

    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t; cin >>t;
    while(t--){
        cin >>n;
        Try(1);
    }
   return 0;
}