#include<bits/stdc++.h>
using namespace std ;
bool shh(long long n){
	if (n==1){
		return false ;
	} 
	int sum = 1 ;
	for(int i=2 ; i <= sqrt(n) ; i++){
		if(n%i==0){
			sum+=i ;
			if(i != n / i ){
				sum+= n / i ;
			}
		}
	}
	return sum==n;
}
int main(){
	int t; 
	cin >> t ;
	while(t--){
	int n ;
	cin >> n ;
	if(shh(n)){
		cout << 1 << endl ;
	}
	else {
		cout << 0 << endl ;
	}
	}
	return 0 ;
}