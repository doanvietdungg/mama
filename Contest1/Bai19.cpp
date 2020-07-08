#include<iostream>

using namespace std ;

int n ;
int a[15];

void HienThi(int A[] , int k){
	while(k >= 1){
		int b[n+1] ;
		cout << "[";
		for(int i = 1 ; i <= k ; i++)
			cout << a[i] << " ";
		cout << "]";	
					
		for(int j = 1 ; j <= k -1 ; j++)			
			b[j] = a[j] + a[j+1];
			
		for(int tmp = 1 ; tmp <= k -1 ; tmp++)
			a[tmp] = b[tmp];
			
		cout << endl ;	
		k -- ;		
	}	
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1 ; i <= n ; i++)
			cin >> a[i];
		HienThi(a , n);
			
	}
	
}
