#include<iostream>

using namespace std ;

int n;
int a[15] ;
bool ok , check[15];

void Display(){
	for(int i = 1 ; i <= n ; i++)
		cout << a[i];
	cout << " ";	
}

void Sinh(){
	int i = n ;
	while(check[i])
		i--;
	if(i > 0){
		a[i] = 1 - a[i];
		check[i] = true ;
		for(int j = i+1 ; j <= n ; j++)
			check[j] = false ;
	}
	else 
		ok = false ;
}

int main(){
	int t ;
	cin >> t;
	while(t--){
		ok = true ;
		cin >> n;
		for(int i = 1 ; i <= n ; i++){
			a[i] = 0 ;
			check[i] = false ;
		}
		while(ok){
			Display();
			Sinh();
		}
		cout << endl;
	}
	
	return 0;
}
