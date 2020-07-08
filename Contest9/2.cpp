#include<iostream>
#include<string>
using namespace std;

int n;
int a[1005][1005];
int main(){
//	string s = "12 21 34";
//	int tmp = 0 ;
//	for(int i = 0 ; i < s.size() ; i++){
//		if(s[i] != ' '){
//			tmp = tmp*10 + (s[i]-'0');
//		}
//		if(s[i] == ' ' || i == s.size()-1){
//			cout << tmp << endl;
//			tmp = 0;
//		}	
//	}
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			a[i][j] = 0;
		}
	}

	cin.ignore();
	int tmp = 0;
	for(int i = 1 ; i <= n ; i++){
		string s; 
		getline(cin , s);
		for(int j = 0 ; j < s.size() ; j++){
			if(s[j] != ' '){
				tmp  = tmp*10 + s[j]-'0';				
			}
			if(s[j] == ' ' || j == s.size()-1){
				a[i][tmp] = 1;
				tmp = 0;
			}
		}				
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++){
			if(a[i][j] == 1)
				cout << i << " " << j << endl;
		}
	}
	return 0;
}
