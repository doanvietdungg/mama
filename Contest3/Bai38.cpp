#include<bits/stdc++.h>
using namespace std ;

int main(){
	int t;
	cin >> t ;
	while(t--){
		long int  m , n , k;
		cin >> m >> n >> k;
		long int A[m+1];
		for(long int i = 1 ; i <= m ; i++)
			cin >> A[i];
		long int B[n+1];	
		for(long int i = 1 ; i <= n ; i++)
			cin >> B[i];
		long int C[m+n+1];
		for(long int i = 1 ; i <= m ; i++)
			C[i] = A[i];
		long int tmp = 1;	
		for(long int i = m + 1 ; i <= m + n  ; i++){
			C[i] = B[tmp];
			tmp++;	
		}
		sort(C + 1 , C+m+n);
		cout << C[k] << endl; 
	}
	
	return 0;
}
//void Solve(){
//	long long int n , m , k;
//	cin >> n >> m >> k;
//	vector<long long int> a;
//	vector<long long int> b;
//	for(long long int i = 0 ; i < n ; i++){
//		long long int x ;
//		cin >> x ;
//		a.push_back(x);
//	}
//	for(long long int i = 0 ; i < m ; i++){
//		long long int x;
//		cin >> x;
//		b.push_back(x);
//	}
//	long long int i = 0  , j = 0;
//	vector<long long int> c;
//	while(i < n && j < m){
//		if(a[i] < b[j]){
//			c.push_back(a[i]);
//			i++;
//		}
//		else if(b[j] < a[i]){
//			c.push_back(b[j]);
//			j++;
//		}
//		else if(a[i] == b[j]){
//			c.push_back(a[i]);
//			i++;
//			j++;
//		}
//	}
//	while(i < n){
//		c.push_back(a[i]);
//		i++;
//	}
//	while(j < m){
//		c.push_back(b[j]);
//		j++;
//	}
//	cout << c[k-1] << endl;
//}
//
//int main(){
//	int T ;
//	cin >> T ;
//	while(T--){
//		Solve();
//	}
//	return 0;
//}


