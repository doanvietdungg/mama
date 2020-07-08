#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long int n;
		cin >> n;
		int a[100005];
		for(long int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		
		sort(a ,a+n-1+1);
		for(long int i = 0 ; i < n ; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
