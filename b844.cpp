#include<bits/stdc++.h>
using namespace std ;
// winner
int main(){
	long long n , q , a ;
	cin >> n >> q ;
	long long num[21475][100000] ;
	for( long long i=0 ; i<2147483647 ; i++ ){
		num[i/100000][i%100000] = 0 ;
	}
	for( long long i=0 ; i<n ; i++ ){
		cin >> a ;
		a-- ;
		num[a/100000][a%100000] ++ ;
	}
	// ppap 
	num[0][0] = num[0][0]%2 ; 
	for( long long i=1 ; i<214748364 ; i++ ){
		num[i/100000][i%100000] = num[(i-1)/100000][(i-1)%100000] ;
	}
	for( long long i=0 ; i<q ; i++ ){
		cin >> a ;
		a-- ;
		cout << num[a/100000][a%100000] << endl ; 
	}
}
