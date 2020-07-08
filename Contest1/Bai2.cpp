#include<bits/stdc++.h>
using namespace std ;

void Sinh(int A[] , int n , int  k){
	int i  = k ;
	A[0] = -1 ;
	while(A[i] == n - k + i )
		i--;
	A[i]++;
	for(int j = i + 1 ; j <= k ; j++){
		A[j] = A[j-1] + 1;
	}	
	
}

void HienThi(int A[] , int n ){
	for(int i = 1 ; i <= n ; i++){
		cout << A[i] << " ";
	}
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		int N , K ;
		cin >> N >> K ;
		int A[K+1];
		for(int i = 1 ; i <= K ; i++){
			cin >> A[i];
		}
		Sinh(A , N , K);
		HienThi(A , K);
		cout << endl ;
	}
	
	return 0 ;
}
