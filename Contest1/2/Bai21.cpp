#include<iostream>
#include<string>
using namespace std; 

bool check[20] ;
string s ;
int a[20];
void Try(int i){
	for(int j = 0 ; j < s.size() ; j++){
		if(!check[j]){
			a[i] = j;
			check[j] = true ;
			if(i == s.size()){
				for(int l = 1 ; l <= s.size() ; l++)
					cout << s[a[l]];
				cout << " ";
			}
			else 
				Try(i+1);
			check[j] = false ;	
		}	
	}
}

int main(){
	int t ;
	cin >> t;
	while(t--){
		for(int i = 0 ; i <= 15 ; i++){
			check[i] = false;
		}
		cin >> s ;
		Try(1);
		cout << endl;
	}	
	return 0 ;
}
