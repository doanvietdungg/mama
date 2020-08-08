#include<iostream>
#include<string>

using namespace std ;

string s ;
int n ;
int G[20];
bool check[20];

void Sinh(){
	int i = n ; 
	while(check[i])
		i--;
	if(i > 0){
		G[i] = 1 - G[i];
		check[i] = true;
		for(int j = i + 1 ; j <= n ; j++)
			check[j] = false;
	}	
	
}


int main(){
	int t  ;
	cin >> t ;
	while(t--){
		cin >> s ;
		n = s.length();
		int count = 0;
		for(int i = n-1 , chiso = 1; i >= 0 ; i-- , chiso *= 2){
			count += (s[i] - '0')*chiso;
			G[n-i] = 0;
			check[n-i] = false ;
		}
		while(count--){
			Sinh();
		}
		for(int i = 1 ; i <= n ; i++)
			cout << G[i];
		cout << endl;	
		
	}
	
	
	return 0 ;
}
