#include<iostream>
#include<algorithm>

using namespace std;

long long a[35];
int n , s ;

int result(int s){
	int count = 0 ;
	for(int i = n - 1 ; i >= 0 ; i-- ){
		if(s >= a[i]){
			count ++ ;
			s = s - a[i];
		}
		if(s == 0)	return count;
	}
	return -1 ;
	
}

int main(){
		cin >> n >> s ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a , a + n); 
		cout << result(s) << endl;
	
	return 0 ;
}
