#include<bits/stdc++.h>

using namespace std;
long int n , x;
long int a[100005];
//long int binary_search(){
//	long int l = 0 ,  r = n-1;
//	while(l <= r){
//		long int mid =(l+r)/2;
//		if(a[mid] == x) return 1;
//		if(a[mid] < x) l = mid+1;
//		if(a[mid] > x) r = mid-1;
//	}
//	return -1;
//}

int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> x;
		for(long int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
//		sort(a , a+n);
//		cout << binary_search() << endl;
		if(binary_search(a,a+n,x) )
				cout << 1 << endl;	
		else 
			cout << -1 << endl;		
	}
	
	return 0;
}
