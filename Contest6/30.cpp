#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long int n;
	cin >> n;
	long long a[100005];
	for(long int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a ,a+n);
	for(long int i = 0 ; i < n ; i++ ){
		cout << a[i] << " ";
	}
	
	return 0;
}

