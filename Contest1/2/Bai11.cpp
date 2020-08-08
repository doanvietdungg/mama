#include<iostream>
#include<string>

using namespace std;
string s ;
int n ;
bool check[20];
int G[20] , tmp[20];
int N[20];

void SinhGray(){
	int i = n ;
	while(check[i])
		i--;
	if(i > 0){
		G[i] = 1- G[i];
		check[i] = true;
		for(int j = i + 1 ; j <=n ; j++)
			check[j] = false;		
	}	
}

bool Kiemtra(int A[] ){
	for(int i = 1 ; i <= n ; i++){
		if(A[i] != tmp[i])
			return false;
	}
	return true;
}

void Sinh(){
	int i = n ;
	while(N[i] == 1)
		i--;
	if(i > 0 ){
		N[i] = 1 ;
		for(int j = i + 1 ; j <= n ; j++)
			N[j] = 0 ;
	}	
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s ;
		n = s.length();
		for(int i = 0 ; i < n ; i++){
			tmp[i+1] = s[i] - '0';
			G[i + 1] = 0;
			check[i+1] = false ;
			N[i+1] = 0;
		}
		int count = 0 ;
		while(!Kiemtra(G)){
			SinhGray();
			count ++ ;
		}
		while(count --){
			Sinh();
		}
		for(int i = 1 ; i <= n ; i++){
			cout << N[i];
		}
		cout << endl;					
	}	
	return 0 ;
}
