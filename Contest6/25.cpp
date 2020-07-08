#include<iostream>
#include<algorithm>
using namespace std;
long int n;
long int a[10000005];

int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> n;
		for(long int i = 0 ; i < n ; i++)
			cin >> a[i];
		sort(a, a+n);
		if(a[0] == a[n-1])
			cout << -1 << endl;	
		else{
			long int tmp = 1 ; 
			while(tmp < n){
				if(a[tmp] > a[0])
					break;
			}
			cout << a[0] << " " << a[tmp] << endl;
			
		}		
	}
	
	return 0;
}
