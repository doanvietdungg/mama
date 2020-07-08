#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long int N ;
		cin >> N;
		long long int A[N+1];
		for(int i = 1 ; i <= N ; i++)
			cin >> A[i];
		long long int B[N];
		for(int i = 1 ; i <= N-1 ;i++)
			cin >> B[i];	
		for(long int i = 1 ; i<= N ; i++){
			if(A[i] != B[i]){
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
} 
//void Solve(){
//	
//	long long int n ; 
//	cin >> n;
//	vector<long long int> a;
//	vector<long long int> b;
//	for(int i = 0 ; i < n ; i++){
//		long long int x ;
//		cin >> x;
//		a.push_back(x);
//	}
//	for(int i = 0 ; i < n-1 ; i++){
//		long long int tmp;
//		cin >> tmp;
//		b.push_back(tmp);
//	}
//	long long int l = 0  , r = n-1;
//	while(l <= r){
//		long long int mid = (l+r)/2;
//		if(!binary_search(b.begin() , b.end() , a[mid]) ){
//			cout << mid + 1 << endl;
//			break ; 
//		}else{
//			if(a[mid] == b[mid]){
//				l = mid ;
//			}else
//				if(a[mid] > b[mid]){
//					r = mid ; 
//				}else	l = mid;
//		}
//	}
//	
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
