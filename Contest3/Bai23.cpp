#include<bits/stdc++.h>

using namespace std ;
int tmp1  , tmp;

void Solve(){
	int n ;
	long long int k;
	cin >> n >> k;
	vector<int> a;
	a.push_back(1);
//	int tmp = 2;
//	a.push_back(tmp);
	while(tmp1 < n - 1){
		a.push_back(tmp);
		long long int chiso = a.size() ;
		long long int sopt = 2*a.size()-1;
		for(long long int i = chiso , tmp2 = 0 ; i < sopt ; i++ , tmp2++ ){
			a.push_back(a[tmp2]);
		}
		tmp++;
		tmp1 ++;
	}
	cout << a[k-1] << endl;
//	for(long long int i = 0 ; i < a.size() ; i++)
//		cout << a[i] << " ";
//	cout << endl;	 	
		
	
	
}
int  main(){
	int T ;
	cin >> T;
	while(T--){
		tmp1 = 0;
		tmp = 2;
		Solve();	
	}
	return 0;
}
