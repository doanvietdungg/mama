#include<bits/stdc++.h>

using namespace std;
long int n ;
long int a[10005];

int main(){
	int T;
	cin >> T ;
	while(T--){
		cin >> n;
		for(long int i = 0 ; i < n ; i++ ){
			cin >> a[i];
		}
		long int d[100005] = {0};
		for(int i = 0 ; i < n ; i++){
			d[a[i]]++;
		}
		sort(a ,a+n);
		long int save[100005];
		for(long int i = 0 ; i <= a[0] ; i++){
			if(d[i] > 0)
				save[i] = i;
		}
		for(long int i = 0 ; i  < a[0]  ; i++){
			for(long int j = i+1 ; j <= a[0] ; j++){
				if(d[i] < d[j]){
					swap(d[i] , d[j]);
					swap(save[i] , save[j]);
				}
			}
		}
	
		long long i = 0;
		while(d[i] > 0){
			cout << d[i] << " ";
			i++;
		}
		cout << endl;
				
	}
	
	return 0;
}
