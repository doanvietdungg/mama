#include<iostream>
using namespace std ;

int n , k ;
char a[20];
bool ok  = false ;


void Init(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = '0';
	}	
}

bool check(){
	int tmp = 0;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == '1')
			tmp++;	
	}
	if(tmp == k) return true ;
	else return false ;
}

void Sinh(){
	int  i = n ;
	while(a[i] == '1'){
		a[i] = '0';
		i--;
	}
	if(i == 0)	ok = true ;
	else 
		a[i] = '1';
}

void HienThi(){
	if(check()){
		for(int i = 1 ; i <= n ; i++ ){
			cout  << a[i] ;
		}
		cout <<  endl;
	}
		
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> n >> k ;
		Init();
		while(!ok){
			Sinh();
			HienThi();
		}
		ok = false ;
	}	
	return 0 ;
}
