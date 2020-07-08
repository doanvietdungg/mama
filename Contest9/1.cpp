#include<iostream>
using namespace std;
int v ;
long int e;
int a[1005][1005];
bool check(int i){
	for(int j = 1 ; j <= v ; j++){
		if(a[i][j] == 1)
			return true;
	}
	return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> v >> e;		
		for(int i = 1 ; i <= v ; i++){
			for(int j = 1 ; j <= v ; j++){
				a[i][j] = 0;
			}
		}
		int tmp1 , tmp2;
		for(long int i = 1 ; i <= e ; i++){
			cin >> tmp1 >> tmp2;
			a[tmp1][tmp2] = 1;
			a[tmp2][tmp1] = 1;
		}
		for(int i = 1 ; i <= v ; i++){
				cout << i << ": " ;
				for(int j = 1 ; j <= v ; j++){
					if(a[i][j] == 1)
						cout << j << " ";
				}
				cout << endl;
		}
	}
	return 0;
}
