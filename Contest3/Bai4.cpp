#include<bits/stdc++.h>

using namespace std ;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ; i < n; i++)
			cin >> a[i];
		sort(a , a+n);
		long long int sum1 = 0 , sum2 = 0;
		for(int i = 0 ; i < n ; i++){
			if(i%2 == 0){
				sum1 = sum1*10 + a[i];
			}else{
				sum2 = sum2*10 + a[i];
			}
		}
		cout << sum1+sum2 << endl;	
	}
	
	return 0 ;
}
