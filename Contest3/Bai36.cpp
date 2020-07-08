#include<bits/stdc++.h>
using namespace std;

void Solve(){
	string s1 , s2 ;
	cin >> s1 >> s2 ;
//	cout << s1 << " " << s2 << endl;
	long long int tp1 = 0 , tp2 = 0;
	int n1 = s1.length();
	int n2 = s2.length();
	for(int i = n1 - 1 , chiso = 1 ; i >= 0 ; i-- , chiso *= 2 ){
		tp1 += (s1[i] - '0')*chiso;
	}
	for(int i = n2 - 1 , chiso = 1 ; i >= 0 ; i-- , chiso *= 2 ){
		tp2 += (s2[i] - '0')*chiso;
	}  
	cout << tp1*tp2 << endl;
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		Solve();
	}
	
	return 0;
}
