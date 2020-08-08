#include<iostream>
using namespace std ;

int a[557];
int n  , stop ;
void Sinh(){
	int i = n ;
	while(a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0)	stop = 1 ;
	else 
		a[i] = 1 ;
}

int main(){
	int t ;
	cin >> t;
	while(t--){
		int k , danhdau = 0;
		cin >> k ;
		for(n = 0 ; n <= 500 ; n++){
			stop = 0;
			while(stop == 0){
				long long tong = 0 ;
				for(int i = 1 ; i <= n ; i++)
					tong = tong*10 + a[i];
				if(tong !=0 && tong*9 % k == 0){
					cout << tong*9 << endl ;
					danhdau = 1;
					break;			
				}
				Sinh();	
			}
			if(danhdau == 1) break;
		}		
	}	
	return 0;
}
