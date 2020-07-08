#include<iostream>
#include<string>
using namespace std;
string s; 
int n , tmp;
int a[1005][1005];
int main(){
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			a[i][j] = 0;
		}
	}
	cin.ignore();
	int tmp = 0;	
	for(int i = 1 ; i <= n ; i++){
		getline(cin , s);
		for(int j = 0 ; j < s.size() ; j++){
			if(s[j] != ' '){
				tmp = tmp*10 + s[j]-'0';
			}
			if(s[j] == ' ' ||  j == s.size()-1){
				a[i][tmp] = 1;
				tmp = 0;
			}
		}				
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
