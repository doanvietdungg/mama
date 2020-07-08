#include<iostream> 

using namespace std;

int money ;
int a[] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int result(int money){
	int count = 0 ;
	for(int i = 9 ; i >= 0 ; i--){
		if(money >= a[i]){
			count += money/a[i];
			money %= a[i];
		}
	}
	return count ;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> money;
		cout << result(money) << endl ;
	}
	
	return 0;
}
