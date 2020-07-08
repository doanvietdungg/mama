#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n , k;
		cin >> n >> k;
		int a[1005];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		int res = 0;
		for(int i = 0 ; i < n-1 ; i++){
			for(int j = i+1 ; j < n ; j++){
				if(a[i] + a[j] == k)
					res++;
			}
		}
		cout << res << endl ;	
	}
	return 0;
}
