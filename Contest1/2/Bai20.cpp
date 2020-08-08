#include<iostream>

using namespace std;

void Display(int A[] , int  n){
	cout << "[";
	for(int i = 0 ; i < n ; i++){
		cout << A[i] << " ";
	}
	cout  << "]"  ;
}

void Dequy(int A[] , int n){
	if(n < 1)	
		return ;
	else{
	int tmp[n-1];
	for(int i = 0 ; i < n ; i++){
		int x = A[i] + A[i+1];
		tmp[i] = x ;
	}
	Dequy(tmp , n-1);
	Display(A , n);
	}
}

int main(){
	int t;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ;
		int a[20];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		Dequy(a , n);
		cout << endl ;
	}
	
	
	return 0 ;
}
