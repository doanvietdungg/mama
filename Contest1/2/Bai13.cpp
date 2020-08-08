#include<iostream>
using namespace std ;

bool ok = false ;
int n , k , count = 0 ;
char a[20];
string s[1000000];

void Init(){
	for(int i = 1 ; i <= n ; i++){
		a[i] = 'A';
	}
}

bool check(){
	int d = 0 , tmp = 1 ;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] == 'A' && a[i+1] == 'A'){
			tmp ++ ;
			if(tmp >= k)	d++;
		}
		else{
			tmp = 1;
		}
		
	}
	if(d == 1) return true ;
	else return false ;
	
}


void dem(){
	if(check())
	{
		s[count] = "";
		for(int i = 1 ; i <= n ; i++)
		{
			s[count] += a[i];
		}
		count ++ ;
	}
}

void Sinh(){
	int i = n ; 
	while(a[i] == 'B'){
		a[i] = 'A';
		i--;
	}
	if(i == 0)
		ok = true ;
	else {
		a[i] = 'B';	
	}
	
}


int main(){
	cin >> n >> k ;
	Init();
	while(!ok){
		Sinh();
		dem();
	}
	cout << count << endl ;
	for(int i = 0 ; i < count ; i++){
		cout << s[i] << endl ;
	}
	return 0 ;
}
